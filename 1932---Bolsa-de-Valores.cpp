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

int n;
int c;
cin>>n>>c;
vector<int> v(n);

for (int i=0;i<n;i++)
{
    cin>>v[i];
}
ll ans=0;
int aux=v[0];
int aux2=0;
for (int i=0;i<n;i++)
{
 if(v[i]<aux){if(aux2>aux+c){ans+=aux2-(aux+c);} aux=v[i]; aux2=0;}
 if(v[i]>aux2){aux2=v[i];}


   if((aux2>v[i+1]+c or i==n-1)  and aux2>aux+c){ ans+=aux2-(aux+c); aux=v[i+1]; aux2=0;}


}
cout<<ans<<endl;

    return 0;


}
