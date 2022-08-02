#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int j=1,c=0;
    getline(cin,s);
    char arr[s.length()/3];
    if(s.length()>2)
    {
        arr[0]=s[j];
        for(int i=1; i<s.length()/3; i++)
        {
            j=j+3;
            arr[i]=s[j];
        }

        for(char cha='a'; cha<='z'; cha++)
        {
            for(int i=0; i<s.length()/3; i++)
            {
                if(cha==arr[i])
                {
                    c++;
                    break;
                }
            }
        }
    }
    else
    {
        c=0;
    }
    cout<<c;

    return 0;
}
