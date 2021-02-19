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
vector<ll> v;
vector<ll> fatorial;
fatorial.pb(1);
fatorial.pb(1);
for(int i=2;i<100001;i++)
{
    fatorial.pb((i*fatorial[i-1])%1000000009);
}
while(cin>>n)
{
    v.clear();
    if(n==0){break;}
    else
    {
            n-=3;
        v.pb(1);
        ll mod=2;
        for(int i=1;i<=n;i++)
        {
            v.pb((v[i-1]+mod));
            mod++;
        }

        ll ans=0;
        for(int i=0;i<=n;i++)
        {

           ans+=((v[i]*fatorial[n])%1000000009);
        }
        cout<<ans%1000000009<<endl;
