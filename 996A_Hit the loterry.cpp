#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0;
    cin>>n;
    for(;;)
    {
        if(n>=100)
        {
            n=n-100;
            c++;
            continue;
        }
        if(n>=20)
        {
            n=n-20;
            c++;
            continue;
        }
        if(n>=10)
        {
            n=n-10;
            c++;
            continue;
        }
        if(n>=5)
        {
            n=n-5;
            c++;
            continue;
        }
        if(n>=1)
        {
            n=n-1;
            c++;
            continue;
        }
        if(n==0)
        {
            break;
        }
    }
    cout<<c;

//    1,5,10,20,100

    return 0;
}
