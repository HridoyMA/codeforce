#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            {
                c++;
                break;
            }
        }
    }
    if(c==26)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    getchar();
}
