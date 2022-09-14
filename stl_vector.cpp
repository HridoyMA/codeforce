#include<bits/stdc++.h>
using namespace std;

bool com(int a,int b)
{
    return a>b;
}
template <class t>
void display(vector<t> &v)
{
    sort(v.begin(),v.end(),com);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    v.front()-=v.back();
    cout<<v.front();
}
int main()
{
    vector<int> v1;
    for(int i=0;i<4;i++)
    {
        int el;
        cin>>el;
        v1.push_back(el);
    }
    display(v1);

    return 0;
}
