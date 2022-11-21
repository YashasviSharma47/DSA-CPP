#include<iostream>
using namespace std;

int main() {
  int a[10], n, ans=0, i;
  cin>>n;
  for(i=0 ; i<n ; i++)
  {
    cin>>a[i];
  }
  for(i=0 ; i<n ; i++)
  {
    ans=ans^a[i];
  }
  for(i=1 ; i<n ; i++)
  {
    ans=ans^a[i];
  }
  cout<<ans;
}
