#include<iostream>
using namespace std;

void firstPositions(int a[10], int n, int key)
{
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ansf;
  while(s<=e)
  {
    if(a[mid] == key)
    {
      ansf = mid;
      e = mid-1;
    }

    if(a[mid] < key)
    {
      s = mid+1;
    }
    if(a[mid] > key)
    {
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  cout<<ansf<<endl;
}

void lastPositions(int a[10], int n, int key)
{
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ansl;
  while(s<=e)
  {
    if(a[mid] == key)
    {
      ansl = mid;
      s = mid+1;
    }

    if(a[mid] < key)
    {
      s = mid+1;
    }
    if(a[mid] > key)
    {
      e = mid-1;
    }
    mid = s + (e-s)/2;
  }
  cout<<ansl<<endl;
}

int main(int argc, char const *argv[]) {
  int a[10], n, i, key;
  cin>>n;
  cout<<"KEY ";
  cin>>key;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"First ";
  firstPositions(a,n,key);
  cout<<"Last ";
  lastPositions(a,n,key);

  return 0;
}
