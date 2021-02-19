#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll dp[800][800];
ll n;
ll forca[800];
ll peso [800];
ll k;
ll r;

ll pd (ll obj, ll aguenta)
{
    if(dp[obj][aguenta]>=0){return dp[obj][aguenta];}
    if(obj==n){return 0;}
    if(!aguenta){return 0;}

    ll atira= -LINF;
    ll nao_atira = pd(obj+1,aguenta);
    if(peso[obj]<=aguenta)
    {
        atira=pd(obj+1, aguenta-peso[obj])+forca[obj];
         return dp[obj][aguenta]=max(atira,nao_atira);
    }
    return dp[obj][aguenta]=nao_atira;
}

int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
