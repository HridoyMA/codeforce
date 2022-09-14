#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    long long c=0;
    int arr[n],m=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]<m)
        {
            c=c+(m-arr[j]);
        }
        m=max(m,arr[j]);
    }
    cout<<c;

    return 0;
}
