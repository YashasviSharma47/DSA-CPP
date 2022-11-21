#include <iostream>
using namespace std;

int main()
{
  int a[10], i, j, k, t, n;
  cin>>n;
  cout<<"Target: ";
  cin>>t;
  for ( i = 0; i < n; i++)
  {
    cin>>a[i];
  }

  for ( i = 0; i < n; i++) {
    for ( j = i+1; j < n; j++) {
      for ( k = j+1; k < n; k++) {
       if(a[i]+a[j]+a[k] == t)
       {
        cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
       }
      }
     }
    }
}
