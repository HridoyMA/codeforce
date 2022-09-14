#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,m;
        cin>>a>>b>>m;
        int i=0;
        while(1)
        {
            int temp1,t1;
            int n=pow(a,i);
            if(n>b)
            {
                t1=n-b;
                if(m>t1)
                {
                    temp1=m/t1;
                    if(temp1==0)
                    {
                        break;
                    }
                    else
                        i++;
                }
                else
                {
                    temp1=t1/m;
                    if(temp1==0)
                    {
                        break;
                    }
                    else
                        i++;
                }
            }
            else
            {
                t1=b-n;
                if(m>t1)
                {
                    temp1=m/t1;
                    if(temp1==0)
                    {
                        break;
                    }
                    else
                        i++;
                }
                else
                {
                    temp1=t1/m;
                    if(temp1==0)
                    {
                        break;
                    }
                    else
                        i++;
                }
            }
        }
cout<<i;

    }
}
