#include <iostream>

using namespace std;

int main()
{
    int a[10], i, j, n, temp;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>=0)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
            else
            {
                break;
            }
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
