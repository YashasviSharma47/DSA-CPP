#include <iostream>

using namespace std;

void printArray(int a[50], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
}

int main()
{
    int a[10],i,n, start, end, t;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    start = 0;
    end = n-1;

    while(start<end)
    {
      t = a[start];
      a[start] = a[end];
      a[end] = t;

      start++;
      end--;
    }
    cout<<"Reverse array"<<endl;
    printArray(a,n);

    return 0;
}
