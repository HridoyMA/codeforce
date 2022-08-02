#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n*2];
    for(int i=0; i<n*2; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n*2; i=i+2)
    {
        for(int j=0; j<n*2; j=j+2)
        {
            if(arr[i]==arr[j])
            {
                c++;

            }
        }
    }

    cout<<c;

    return 0;
}
