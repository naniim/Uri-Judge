 #include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n;
int m;
vector<int> moedas;
bool verifica[2000000];
int progdinamica[2000000];

int dp (int x)
{
    if(verifica[x]==true){return progdinamica[x];}

    if(x==0){return 0;}
    if (x<0){return INF;}

    int ans=INF;

    for(int i=0;i<n;i++)
    {
        ans=min(ans,dp(x-moedas[i])+1);
    }
    verifica[x]=true;

    return progdinamica[x]=ans;
}



int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin>>t;
while(t!=0)
{
    t--;
    cin>>n;
    cin>>m;
    moedas.clear();
    memset(verifica,0,sizeof(verifica));
