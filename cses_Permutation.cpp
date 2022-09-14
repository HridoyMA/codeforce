#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n<=3&&n!=1)
    {
        cout<<"NO SOLUTION";
    }
    else if(n==4)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
    }
    else
    {
        for(int i=n; i>=1; i--)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=n; i>=1; i--)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
