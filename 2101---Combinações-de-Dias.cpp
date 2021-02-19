#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll mdc(ll a, ll b)
{

    if(b==0){return a;}
    else{return mdc(b,a%b);}

}

ll mmc (ll a, ll b)
{

    return (a*b)/mdc(a,b);
}

int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);

ll n;
ll m;
while(cin>>n>>m)
{

    if(n==0 and m==0){break;}
    else
    {
