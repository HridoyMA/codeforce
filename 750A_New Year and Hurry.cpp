#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int t=240-k;
    int c=0,temp=0;
    for(int i=1;i<=n;i++)
    {
        c+=(5*i);
        if(c<=t)
        {
            temp++;
        }
    }
    cout<<temp;
    return 0;
}
