#include<iostream>
using namespace std;

int binarySearch(int a[10], int n, int key)
{
  int s = 0;
  int e = n-1;
  int mid = s + (e-s/2); //to pass the test case where e+n becomes out of range

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

int main(int argc, char const *argv[]) {
  int a[10], n, key, i;
  cin>>n;
  cout<<"Key: ";
  cin>>key;
  for(i=0;i<n;i++)
  {
    cin>>a[n];
  }

  int index = binarySearch(a,n,key);
  cout<<key<<" is present at "<<index<<" index";
return 0;
}
