#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m=0,t=0;
    cin>>a>>b;
    if(a>b)
    {
        m=a-b;
        t=b;
    }
    else
    {
        m=b-a;
        t=a;
    }
    int c=m/2;
    cout<<t<<" "<<c;

    return 0;
}
