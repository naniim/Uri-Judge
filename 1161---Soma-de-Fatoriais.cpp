#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll fat (int a)
{
    if(a==0){return 1;}
    else if (a==1){return 1;}
    else {return a*fat(a-1);}
}




int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
while(true)
{
    
    ll n;
    ll m;
    cin>>n;
    cin>>m;
    if(cin.eof()==true)break;
   cout<<fat(n)+fat(m)<<endl;
   }
return 0;
}

