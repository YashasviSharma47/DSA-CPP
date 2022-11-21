
//THIS CODE CONSIDERS A SPECIAL CASE WHERE BOTH THE ARRAYS ARE SORTED SO I MADE IT OPTIMIZED

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int a[10], b[10], n, m, i,j;

  cin>>n;
  cin>>m;

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }

  for (int j = 0; j < m; j++) {
    cin>>b[j];
  }
  i=0;
  j=0;
  while(i<n && j<m)
  {
    if(a[i] == b[j]){
    cout<<a[i]<<" ";
    i++;
    j++;
    }

    else if(a[i] < b[j])
    i++;

    else
    j++;
  }
  return 0;
}
