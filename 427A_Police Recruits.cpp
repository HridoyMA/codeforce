#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,p=0,c=0;
    cin>>t;
    int arr[t];
    while(t--)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            p+=arr[i];
        }
        if(arr[i]<0)
        {
            p+=arr[i];
            if(p<0)
            {
                c++;
                p=0;
            }
        }
        i++;
    }
    cout<<c;

    return 0;
}
