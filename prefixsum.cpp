//*********Prefix Sum*********
#include<bits/stdc++.h>
//using namespace std;
//const int N=1e7+10;
//int a[N];
//int a1[N];
//int main()
//{
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>a[i];
//        a1[i]=a1[i-1]+a[i];
//    }
//    for(int i=1;i<=n;i++)
//    {
//        cout<<a1[i]<<" ";
//    }
//    int L,R,t;
//    cin>>t;
//    while(t--)
//    {
//        cin>>L>>R;
//        cout<<a1[R]-a1[L-1]<<endl;
//    }
//
//
//    return 0;
//}
//*********prefix sum 2d arr*********

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
long long ps[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            ps[i][j]=arr[i][j]+ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<ps[c][d]-ps[a-1][d]-ps[c][b-1]+ps[a-1][b-1];
    }
    return 0;
}
