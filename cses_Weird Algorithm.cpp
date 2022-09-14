#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(1)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            cout<<n<<" ";
            n=n/2;
        }
        else
        {
            cout<<n<<" ";
            n=n*3+1;
        }

    }
    cout<<n;

    return 0;
}
