#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m,sum=0,c=0,d=0;
    string op;
    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>op;
        cin>>m;
        if(op[0]=='S')
        {
            sum=sum+(m-1);
        }
        if(op[0]=='A')
        {
            sum=sum+0;
        }
        if(op[0]=='M')
        {
            for(int j=1; j<=100; j++)
            {
                if(j*m<=100)
                {
                    c++;
                }
                else
                    break;
            }
            sum=sum+(100-c);
        }
        if(op[0]=='D')
        {
            for(int j=1; j<=100; j++)
            {
                if(j%m!=0)
                {
                    d++;
                }
            }
            sum=sum+d;
        }
    }
    cout<<sum;

    return 0;
}
