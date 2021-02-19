#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc (int a, int b)
{
    if(b==0)return a;
    else {return mdc(b,a%b);}
}




int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(true)
{
 t--;
 if(t<0)break;
    ll n;
    ll m;
    cin>>n;
    cin>>m;

   cout<<mdc(n,m)<<endl;
   }
return 0;
