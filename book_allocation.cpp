#include<iostream>

using namespace std;
int ispossible(int a[10], int n, int m, int mid)
{
  int pagesum=0;
  int count=1;

  for(int i=0;i<n;i++)
  {
    if(pagesum + a[i] <= mid)
    {
      cout<<"/n upar aa gaya"<<endl;
      pagesum += a[i];
    }

    else
    {
      count++;

      if(count > m || a[i] > mid)
      {
        return 0;
      }
      pagesum = a[i];
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  int a[10], n, m, sum=0, ans=0;

  cin>>n;
  cout<<"Students ";
  cin>>m;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(int i=0;i<n;i++)
  {
    sum += a[i];
  }

  int s = 0;
  int e = sum;
  int mid = s + (e-s)/2;

  while(s<=e)
  {
  if(ispossible(a,n,m,mid) == 1)
  {
    cout<<"/n pohoch gaya"<<endl;
    ans = mid;
    e = mid - 1;
  }

  else
  {
    cout<<"/n else me pohoch gaya"<<endl;
    s = mid + 1;
  }

  mid = s+(e-s)/2;
}
cout<<ans;
  return 0;
}
