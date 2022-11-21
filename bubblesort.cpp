#include<iostream>
using namespace std;

void printArray(int a[10], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
}

int main()
{
  int a[10], i, start, temp,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  start = 1;
  while(start<n)
  {
    for(i=0;i<n-1;i++)
    {
      if(a[i]>a[i+1])
      {
      temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
      }
    }
    start++;
  }
  printArray(a,n);

  return 0;
}
