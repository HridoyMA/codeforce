#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,d=0;
    string s;
    cin>>s;
    for(char i= 'a';i<='z';i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(i==s[j])
            {
                c++;
                s[j]='1';
                break;
            }
        }
    }
    cout<<s;
    if(c>=2)
    {
        cout<<c-2;
    }
    else
        cout<<d;
}
