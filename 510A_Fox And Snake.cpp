#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=2;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<m; j++)
            {
                cout<<'#';
            }
            cout<<"\n";
        }
        else
        {
            if(i==p)
            {
                for(int j=1; j<m; j++)
                {
                    cout<<'.';
                }
                cout<<'#';
                p+=4;
            }
            else
            {
                cout<<'#';
                for(int j=1; j<m; j++)
                {
                    cout<<'.';
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}
