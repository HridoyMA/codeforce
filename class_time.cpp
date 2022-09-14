#include <bits/stdc++.h>
using namespace std;

void print(vector<string> names){
    for(int i=0;i<names.size();i++)
        cout<<names[i]<<endl;
    printf("\n");
}

bool mycomp(string a, string b){
    return a<b;
}

vector<string> alphabaticallySort(vector<string> a){
    int n=a.size();

    sort(a.begin(),a.end(),mycomp);
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    vector<string> f_names;
    vector<string> names;
    string name;
    for(int i=0;i<n*2;i++){
        cin>>name;

        if(i%2==0)
        {
            f_names.push_back(name);
        }
        else
        {
            names.push_back(name);
        }
    }
    names=alphabaticallySort(names);
    print(names);

    return 0;
}
