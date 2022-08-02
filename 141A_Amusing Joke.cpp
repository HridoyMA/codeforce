#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int c=0,p=0;
    int n=(s1.length())+(s2.length());
    if(s3.length()==n)
    {
        for(int i=0; i<s1.length(); i++)
        {
            for(int j=0; j<s3.length(); j++)
            {
                if(s1[i]==s3[j])
                {
                    s3[j]='5';
                    c++;
                    break;
                }
            }
        }
        for(int i=0; i<s2.length(); i++)
        {
            for(int j=0; j<s3.length(); j++)
            {
                if(s2[i]==s3[j])
                {
                    s3[j]='5';
                    p++;
                    break;
                }
            }
        }

        if((s1.length()==c)&&(s2.length()==p))
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";


    return 0;
}
