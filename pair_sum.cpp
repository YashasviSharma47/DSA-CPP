#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int a[10], i, j, t, n;
  cin>>n;
  cout<<"Target: ";
  cin>>t;
  for ( i = 0; i < n; i++)
  {
    cin>>a[i];
  }

  for ( i = 0; i < n; i++) {
    for ( j = i+1; j < n; j++) {
      if(a[i]+a[j] == t)
      {
        int ba = max(a[j],a[i]);
        int ch = min(a[i],a[j]);
        cout<<ch<<" "<<ba<<endl;
      }

    }
  }
}
