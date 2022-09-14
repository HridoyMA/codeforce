#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[5][5] =
    {
        {1,2,9,10,25},
        {4,3,8,11,24},
        {5,6,7,12,23},
        {16,15,14,13,22},
        {17,18,19,20,21}
    };

    long long t,r,c;
    cin>>t;
    long long arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>r>>c;
        arr[i]=x[r-1][c-1];
    }
    for(int i=0; i<t; i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}
