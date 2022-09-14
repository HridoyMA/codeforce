//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false); cin.tie(NULL);
//    long long n,c=0,sum=0;
//    cin>>n;
//    int arr[n-1];
//    for(long long i=0; i<n-1; i++)
//    {
//        cin>>arr[i];
//        sum=sum+arr[i];
//    }
//    c=((n*(n+1))/2);
//    cout<<c-sum;
//
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t,n,m,s1,s2,d;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n>>m>>s1>>s2>>d;
//        int x=max(n,m);
//        int a[x][x];
//        for(int i=1; i<=x; i++)
//        {
//            for(int j=1; j<=x; j++)
//            {
//                a[i][j]=0;
//            }
//        }
//        for(int i=1; i<=x; i++)
//        {
//            for(int j=1; j<=x; j++)
//            {
//                if(i==s1&&j==s2)
//                {
//                    a[i][j]=1;
//                    for(int k=1;k<=d;k++)
//                    {
//                        a[i][j+k]=1;
//                        a[i+k][j]=1;
//                        a[i][j-k]=1;
//                        a[i-k][j]=1;
//                    }
//                }
//            }
//        }
//                for(int i=1; i<=x; i++)
//        {
//            for(int j=1; j<=x; j++)
//            {
//                cout<<a[i][j]<<" ";
//            }cout<<endl;
//        }
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//char upper(char a)
//{
//    return 'A'+(a-'a');
//}
//int main()
//{
//    int a,b,c,d;
//    cin>>a>>b>>c;
//    for(int i=2; c>0; i++)
//    {
//        if(i%a==0||i%b==0)
//        {
//            c--;
//            d=i;
//        }
//    }
//    int lcm;
//    for(int i=1; i<=a*b; i++)
//    {
//        if(i%a==0&&i%b==0)
//        {
//            lcm=i;
//            break;
//        }
//    }
//    cout<<lcm<<endl;
//
//
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,a=0,b=0,c=0,d=0,e=0;
//        cin>>n;
//        string s;
//        cin>>s;
//        if(n==5)
//        {
//            for(int i=0;i<5;i++)
//            {
//                if(s[i]=='T')
//                    a++;
//                if(s[i]=='i')
//                    b++;
//                if(s[i]=='m')
//                    c++;
//                if(s[i]=='u')
//                    d++;
//                if(s[i]=='r')
//                    e++;
//            }
//            if(a==1&&b==1&&c==1&&d==1&&e==1)
//                cout<<"YES"<<endl;
//            else
//                cout<<"NO"<<endl;
//        }
//        else
//            cout<<"NO"<<endl;
//    }
//
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t,n;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        string arr[n],arr1[n],arr2[n];
//        for(int i=0; i<n; i++)
//        {
//            cin>>arr[i];
//        }
//        for(int i=0; i<n; i++)
//        {
//            cin>>arr1[i];
//        }
//        for(int i=0; i<n; i++)
//        {
//            cin>>arr2[i];
//        }
//
//        for(int m=0; m<3; m++)
//        {
//            if(m==0)
//            {
//                        int sum=0;
//                for(int i=0; i<n; i++)
//                {
//                                int c=0;
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr[i]==arr1[j])
//                        {
//                            c++;
////                            cout<<arr1[j]<<i<<" ";
//                        }
//                    }
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr[i]==arr2[j])
//                        {
////                            cout<<arr2[j]<<i<<" ";
//                            c++;
//                        }
//                    }
//                    if(c==0)
//                    {
//                                                sum=sum+3;
//                    }
//                    if(c==1)
//                    {
//                        sum=sum+1;
//                    }
//
//                }
//                cout<<sum<<" ";
//            }
//            if(m==2)
//            {
//                        int sum=0;
//                for(int i=0; i<n; i++)
//                {
//                                int c=0;
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr2[i]==arr[j])
//                        {
//                            c++;
//                        }
//                    }
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr2[i]==arr1[j])
//                        {
//                            c++;
//                        }
//                    }
//                    if(c==0)
//                        sum=sum+3;
//                    if(c==1)
//                        sum=sum+1;
//
////                    cout<<endl<<c<<" "<<sum;
//
//                }
//                cout<<sum<<" ";
//            }
//            if(m==1)
//            {
//                        int sum=0;
//                for(int i=0; i<n; i++)
//                {
//                                int c=0;
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr1[i]==arr[j])
//                        {
//                            c++;
//                        }
//                    }
//                    for(int j=0; j<n; j++)
//                    {
//                        if(arr1[i]==arr2[j])
//                        {
//                            c++;
//                        }
//                    }
//                    if(c==0)
//                        sum=sum+3;
//                    if(c==1)
//                        sum=sum+1;
//                }
//                cout<<sum<<" ";
//            }
//
//        }
//        cout<<endl;
//
//
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t,n;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        string s1[n],s2[n],s3[n];
//        map<string,int>m1,m2,m3;
//        int line1=0,line2=0,line3=0;
//        for(int i=0; i<n; i++)
//        {
//            cin>>s1[i];
//            m1[s1[i]]++;
//
//        }
//        for(int i=0; i<n; i++)
//        {
//            cin>>s2[i];
//            m2[s2[i]]++;
//
//        }
//        for(int i=0; i<n; i++)
//        {
//            cin>>s3[i];
//            m3[s3[i]]++;
//
//        }
//        for(int i=0; i<n; i++)
//        {
//            if(m1[s2[i]]>0 && m3[s2[i]]>0)
//            {
//                line2+=0;
//            }
//            else if(m1[s2[i]]>0 || m3[s2[i]]>0)
//            {
//                line2+=1;
//            }
//            else
//            {
//                line2+=3;
//            }
//
//        }
//
//        for(int i=0; i<n; i++)
//        {
//            if(m1[s3[i]]>0 && m2[s3[i]]>0)
//            {
//                line3+=0;
//            }
//            else if(m1[s3[i]]>0 || m2[s3[i]]>0)
//            {
//                line3+=1;
//            }
//            else
//            {
//                line3+=3;
//            }
//
//        }
//
//        for(int i=0; i<n; i++)
//        {
//            if(m2[s1[i]]>0 && m3[s1[i]]>0)
//            {
//                line1+=0;
//            }
//            else if(m2[s1[i]]>0 || m3[s1[i]]>0)
//            {
//                line1+=1;
//            }
//            else
//            {
//                line1+=3;
//            }
//
//        }
//
//        cout<<line1<<" "<<line2<<" "<<line3<<endl;
//    }
//
//    return 0;
//
//}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=toupper(s[i]);
            x=x+s[i];

        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=tolower(s[i]);
            x=x-s[i];
        }
    }
    x=abs(x);


    return 0;
}






























