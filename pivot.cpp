#include <iostream>
using namespace std;

int findpivot(int a[10], int n)
{
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;
  int ans;

  while(s<e)
  {
    if(a[mid] < a[0])
      e=mid;

    else
      s = mid + 1;

    mid = s + (e-s)/2;
    ans = a[mid];
  }

  return ans;
}

int binarySearch(int a[10], int s, int e, int key)
{
  int mid;
  mid = s + (e-s)/2;
  while(s <= e)
  {
    if(a[mid] == key)
      return mid;

    if(key < a[mid])
      e = mid-1;

    else
      s = mid + 1;

    mid = s + (e-s)/2;
  }
}

int main()
{
  int a[10], i=0, n, key=0, last;
  cin>>n;
  cout<<"Key:";
  cin>>key;

  for(i=0;i<n;i++)
  {
    cin>>a[i];
    last = a[n-1];
  }

  int pivot = findpivot(a,n);

  if(pivot <= key && key <= last)
  {
    cout<<binarySearch(a, pivot, n, key);
  }

  else
  {
    cout<<binarySearch(a, 0, pivot-1, key);
  }


  return 0;
}
