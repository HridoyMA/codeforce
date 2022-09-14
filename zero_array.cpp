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
       int p = b % m;
       int i = 0;

           int x=a;
           while(a%m!=p)
           {
//               cout<<a%m<<" "<<p<<"\n";
               i++;
               a=a*x;

           }
           i=i+1;


//        if(p != 1)
//        {
//            while(p != 1)
//            {
//                p = p /a;
//                i++;
//            }
//        }
//        int a,b,m;
//        cin>>a>>b>>m;
//        int p=b%m;
//        int i=0;
//        for(;;)
//        {
//            if((int)pow(a,i)%m == (int)b%m)
//            {
//                break;
//                cout<<i;
//            }
//            else
//            {
//                i++;
//            }
//        }
        cout<<i<<"\n";
    }

    return 0;
}












