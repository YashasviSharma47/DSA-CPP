#include <iostream>
using namespace std;
void printArray(int a[10], int n)
{
  for (int i = 0; i < n; i++) {
    cout<<a[i]<<" ";
  }
}

void swap(int a[10], int n)
{
  int first=0, second=1, temp;
  for (int i = 0; i < n; i++) {
    swap(a[first], a[second]);
    first += 2;
    second += 2;

  }
}

int main() {
  int a[10],n;
  cin>>n;

  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }

  swap(a,n);
  printArray(a,n);

  return 0;
}
