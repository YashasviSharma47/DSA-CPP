#include<iostream>

using namespace std;

int findSqrt(int n)
{
  int s = 0, sq;
  int e = n-1;
  long long int mid = s + (e-s/2);

  while(s < e)
  {

    sq=mid*mid;
    if(sq == n)
    {
      return n;
    }

    if(sq < n)
    {
      e = mid - 1;
    }

    else
    {
      s = mid;
    }
  }
}

int precision(int root,int pres, int n)
{
  factor = 1;
  double =
  for (int i = 0; i < pres; i++) {
    factor =factor/10;
    for (double j = ; j*j < n; j=j+factor) {

    }
  }
}
int main(int argc, char const *argv[]) {

  int n;
  cin>>n;

  int temproot = sqrt(n);
  cout<<precision(temproot,3,n);
  return 0;
}
