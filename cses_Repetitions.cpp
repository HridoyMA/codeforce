#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t=0,c=1,out=1;;
    cin>>s;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            ++c;
            if(c>out)
            {
                out=c;
            }
        }
        else
        {
            c=1;
        }
    }
    cout<<out;

    return 0;
}
