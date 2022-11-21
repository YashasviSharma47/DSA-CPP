#include<iostream>
#include<climits>
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
  int a[10],n,i,j,temp;

  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printArray(a,n);


return 0;
}
