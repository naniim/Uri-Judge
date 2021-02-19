#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t!=0)
{
    t--;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
     for(int i=0;i<n;i++)
    {
        cout<<v[i];
        if(i!=n-1){cout<<" ";}
    }
    cout<<endl;
}
return 0;
}

