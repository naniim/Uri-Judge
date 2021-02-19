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
int m;
while(true)
{
    cin>>n;
    cin>>m;
    if(n==0 and m==0)break;

    map<int,int>mapa;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            mapa[a]++;
        }
    }
    vector<pii>v;
    for(map<int,int>::iterator it=mapa.begin(); it!=mapa.end(); it++)
    {
        v.pb(make_pair(it->second, it->first));
    }
    sort(v.rbegin(),v.rend());
    vector<int> ans;
    int aux=v[0].first;
    bool confere=false;
    int aux2;
    for (int i=0;i<v.size();i++)
    {

        if(confere==true and aux2!=v[i].first)break;
        if(confere==false and aux!=v[i].first){confere=true;}
