#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>m;
        if(m>2)
        {
            if(m%2==0)
            {
//                cout<<(n/2)-1;
                arr[i]=(m/2)-1;
            }
            else
            {
//                cout<<n/2;
                arr[i]=m/2;
            }

        }
        else
        {
            arr[i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}
