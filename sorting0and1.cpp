#include <iostream>
using namespace std;
void printArray(int a[10], int n){
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{
 int a[10],i,j,n;
 cin>>n;
 for ( i = 0; i < n; i++) {
   cin>>a[i];
 }
 i=0;
 j=n-1;
     while(i<j)
     {
       if(a[i] == 0)
       {
         i++;
       }
       else if(a[j] == 1)
       {
         j--;
       }
       else if(a[i] == 1 && a[j] == 0)
       {
         swap(a[i],a[j]);
         i++;
         j--;--
       }
     }
     printArray(a,n);


}
