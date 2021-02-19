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
ll ans=0;
cin>>n;
ll aux=1;
while(n>0)
{
aux=1;
    for(int i=1;i<15;i++)
    {
        aux*=i;
        if(aux>n){aux=aux/i; break;}
    }
    n-=aux;
    ans++;

}
cout<<ans<<endl;
    return 0;


}
