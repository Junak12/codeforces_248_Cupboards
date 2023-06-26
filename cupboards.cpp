#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    int c1=0,c2=0,c3=0,c4=0;
    int l,r;
    vector<int>v1;
    vector<int>v2;
    while(t--)
    {
        cin>>l>>r;
        v1.push_back(l);
        v2.push_back(r);
    }
    for(auto d:v1)
    {
        if(d==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for(auto d:v2)
    {
        if(d==0)
        {
            c3++;
        }
        else
        {
            c4++;
        }
    }
    cout<<min(c1,c2)+min(c3,c4)<<endl;
    return 0;
}
