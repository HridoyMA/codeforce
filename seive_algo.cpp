//#include<bits/stdc++.h>
//using namespace std;
//#define N 1e7+10
//vector<bool>prime(N,1);
//int main()
//{
//    prime[0]=prime[1]=false;
//    for(int i=2; i<N; i++)
//    {
//        if(prime[i]==true)
//        {
//            for(int j=2*i; j<N; j+=i)
//            {
//                prime[j]=false;
//            }
//        }
//    }
//    vector<int>prime_1;
//    for(int i=0; i<N; i++)
//    {
//        if(prime[i]==true)
//        {
//            prime_1.push_back(i);
//        }
//    }
//    int t;
//    cin>>t;
//    vector<int>arr;
//    int j=0;
//    for(int i=0; 1<t; i++)
//    {
//        if(t%prime_1[j]==0)
//        {
//            t=t/prime_1[j];
//            arr.push_back(prime_1[j]);
//        }
//        else
//        {
//            j++;
//        }
//    }
//    sort(arr.begin(), arr.end());
//
//    for(int i=0; i<arr.size(); i++)
//    {
//        if(i!=arr.size()-1)
//        {
//            cout << arr[i] <<"*";
//        }
//        else
//            cout << arr[i] <<endl;
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e7+10;
//int a1[N];
//int main()
//{
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//        a1[a[i]]++;
//    }
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int x;
//        cin>>x;
//        cout<<a1[x]<<endl;
//    }
//
//    return 0;
//}

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

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e3+10;
//int arr[N][N];
//long long ps[N][N];
//int main()
//{
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            cin>>arr[i][j];
//            ps[i][j]=arr[i][j]+ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
//        }
//    }
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int a,b,c,d;
//        cin>>a>>b>>c>>d;
//        cout<<ps[c][d]-ps[a-1][d]-ps[c][b-1]+ps[a-1][b-1];
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+10;
//int pd[N][N];
//int arr[N];
//int main()
//{
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>arr[i];
//    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=i;j<=n;j++)
//        {
//            arr[j]=arr[j-1]+arr[j];
//        }
//    }
//    for(int i=1;i<)
//
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+10;
//int main()
//{
//    int t,n,p;
//    cin>>t;
//    vector<int>a;
//    while(t--)
//    {
//        cin>>n;
//        for(int i=0; i<n; i++)
//        {
//            cin>>p;
//            a.push_back(p);
//        }
//        sort(a.begin(), a.end());
//        if(a[0]==a[(a.size())-1])
//        {
//            cout<<"yes"<<endl;
//        }
//        else if(a[0]==a[(a.size())-2]&&a[0]!=a[(a.size())-1])
//        {
//            if(((a[a.size()-1])-a[0])%2==0)
//                    cout<<"yes"<<endl;
//                    else
//                    cout<<"no"<<endl;
//        }
//        else
//            cout<<"no"<<endl;
//}
//return 0;
//}


//
//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e5+10;
//int a[3];
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n;
//        scanf("%d",&n);
////        cin>>n;
//        int arr[n];
//        for(int i=0; i<n; i++)
//        {
//            scanf("%d",&arr[i]);
////            cin>>arr[i];
//        }
//        sort(arr, arr+n);
//        int c=0;
//        for(int i=n-1; i>0; i--)
//        {
//            if(((arr[n-1])-arr[0])%2==0)
//                {
//                    c=1;
//                    break;
//                }
//        }
//        if(c==1)
//                cout<<"yes"<<endl;
//        else
//            cout<<"no"<<endl;
//    }
//
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+10;
//int brr[N];
//int main()
//{
//    int n,m;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    cin>>m;
//    for(int i=0;i<m;i++)
//    {
//        int s;
//        cin>>s;
//        brr[s]++;
//    }
//    for(int i=0;i<n;i++)
//    {
//        brr[arr[i]]--;
//    }
//    for(int i=0;i<N;i++)
//    {
//        if(brr[i]>0)
//            cout<<i<<" ";
//    }
//}



//#include<bits/stdc++.h>
//using namespace std;
//int arr[5];
//int s(int x, int y, int z)
//{
//
//    int s = 99999;
//
//    if (x < s)
//        s=x;
//    if (y < s)
//        s=y;
//    if(z < s)
//        s=z;
//
//    return s;
//}
//int main()
//{
//    int n1,n2,n3;
//    cin>>n1>>n2>>n3;
//    int h1[n1],h2[n2],h3[n3];
//    for(int i=0; i<n1; i++)
//    {
//        cin>>h1[i];
//        arr[0]=arr[0]+h1[i];
//    }
//    for(int i=0; i<n2; i++)
//    {
//        cin>>h2[i];
//        arr[1]=arr[1]+h1[i];
//    }
//    for(int i=0; i<n3; i++)
//    {
//        cin>>h3[i];
//        arr[2]=arr[2]+h1[i];
//    }
//    while(1)
//    {
//        int m=s(arr[0],arr[1],arr[2]);
//        if(arr[0]==arr[1]==arr[2])
//            cout<<arr[0];
//        else
//        {
//            if(arr[0]==m)
//            {
//
//            }
//        }
//    }
//
//
//
//
//    return 0;
//}


//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    float a,x,b,y;
//    cin>>t;
//    while(t--)
//    {
//        cin>>a>>x>>b>>y;
//        if((a/x)==(b/y))
//            cout<<"Equal"<<endl;
//        if((a/x) > (b/y))
//            cout<<"Alice"<<endl;
//        if((a/x) < (b/y))
//            cout<<"Bob"<<endl;
//    }
//
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int N=1e4+10;
//int brr[N];
//int main()
//{
//    int t,b;
//    cin>>t;
//    while(t--)
//    {
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        string ans="";
//        for(int i=n-1; i>=0;)
//        {
//            if(s[i]=='0')
//            {
//                ans+='a'+stoi(s.substr(i-2,2))-1;
//                i-=3;
//            }
//            else
//            {
//                ans+=char('a'+(s[i]-'0')-1);
//                i--;
//            }
//        }
//        reverse(ans.begin(),ans.end());
//        cout<<ans<<endl;
//    }
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
typedef     long long       ll;
typedef     vector<ll>      vll;
const int N=1e5+10;
ll arr[N];
vll v1;
vll v;
int main()
{
    ll i,j;
    v.push_back(2);
    for(i=3; i<N; i+=2)
    {
        if(arr[i]==0)
        {
            v.push_back(i);
            if(i>N/i)
                continue;
            for(j=i*i; j<=N; j+=(i+i))
                arr[j]=1;
        }
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i+1]-v[i]==2)
        {
            v1.push_back(v[i]);
            v1.push_back(v[i+1]);
//             i++;
        }
    }
//     for(i=0;i<v1.size();i++)
//     {
//         cout<<v1[i]<<endl;
//     }
    ll t;
    while(cin>>t)
    {
        cout<<"("<<v1[2*(t-1)]<<","<<" "<<v1[(2*(t-1))+1]<<")"<<endl;
    }

    return 0;
}



























