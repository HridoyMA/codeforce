#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Icosahedron")
        {
            c+=20;
        }
        if(s=="Dodecahedron")
        {
            c+=12;
        }
        if(s=="Octahedron")
        {
            c+=8;
        }
        if(s=="Cube")
        {
            c+=6;
        }
        if(s=="Tetrahedron")
        {
            c+=4;
        }
    }
    cout<<c;

    return 0;
}
