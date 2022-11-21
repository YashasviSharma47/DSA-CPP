#include<iostream>
using namespace std;

int main()
{
  int a[10],n,j=0;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for (int i = 1; i < n; i++) {
    {
      for(j=0;j<n-i;j++)
       {
         if(a[i]>a[i+1])
         {
           swap(a[i],a[i+1]);
         }
       }
      }
    }
    for(int i=0;i<n;i++)
    {
      cout<<a[i];
    }

  return 0;
}
