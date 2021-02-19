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

ll n;
while(cin>>n)
{
    ll quantos=1;
    if(n==0){break;}
    else
    {
     vector<ll> v (n);
     ll ans=0;
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }

       for(int i=0;i<n;i++)
     {

ans+=(v[i]*quantos);
quantos*=2;
     }
     cout<<ans<<endl;
    }
}

return 0;
}
