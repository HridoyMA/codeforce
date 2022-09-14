#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,n,H,M,x=0,temp_m[100],temp_h[100],y=1;
    cin>>t;
    int arr[t];
    while(t--)
    {
        cin>>n>>H>>M;
        int h[n],m[n];
        for(int i=0; i<n; i++)
        {
            cin>>h[i]>>m[i];
        }
        for(int i=0; i<n; i++)
        {
            if(H==h[i]&&M==m[i])
            {
                temp_m[x]=0;
                temp_h[x]=0;
                x++;
                y=0;
                break;
            }
        }
        if(y==1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (h[j] > h[j + 1])
                    {
                        swap(h[j], h[j + 1]);
                        swap(m[j], m[j+1]);
                    }

                }
            }
            for(int i=0; i<n; i++)
            {
                if(H<=h[i])
                {
                    if(M>m[i])
                    {
                        temp_m[x]=(m[i]+60)-M;
                        temp_h[x]=(h[i]-H)-1;
                        x++;
                    }
                    else
                    {
                        temp_m[x]= m[i]-M;
                        temp_h[x]= h[i]-H;
                        x++;
                    }
                    break;
                }
            }
        }
        y=1;
    }
    for(int i=0; i<n; i++)
    {
        cout<<temp_h[i]<<" "<<temp_m[i]<<"\n";
    }

    return 0;
}


