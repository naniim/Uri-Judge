#include<bits/stdc++.h>

 #define f first
#define s second
 #define pb push_back
 #define read(x) for(auto& qw : (x)) cin >> qw;

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll MOD = 1000000007;

ll s;
ll t;

vector<vector<pii> > graph;
vector<bool> visitados;
vector<int> ciclos;
vector<pii> pais;
vector<pii> marca;
vector<ll> dist;
ll help = 1;

void dfs(int atual, int pai)
{
visitados[atual]=1;
    for(int i=0;i<graph[atual].size();i++)
    {
        int aux = graph[atual][i].s;
        if(visitados[aux]==0)
        {
            pais[aux]={atual,graph[atual][i].f};
            visitados[aux]=1;
            dfs(aux,atual);

        }
        else if(visitados[aux]==1 and aux!=pai and pais[atual].f!=aux)
        {

            // cycle detected
            ciclos.pb(aux);
            pais[aux]={atual,graph[atual][i].f};
        }
    }
}

void calc (int i)
{
    ll dist = pais[i].s;
    ll atual = pais[i].f;

    if(marca[i].f!=-1){return; }

    while(atual!=i)
    {
        dist+=pais[atual].s;
        atual = pais[atual].f;
    }

    marca[i]={help,dist};
    atual = pais[i].f;

    while(atual!=i)
    {
        marca[atual]={help,dist};
        atual = pais[atual].f;
    }

    return ;
}

ll dijkstra (int qual, ll tamanho)
{
    ll melhor = LINF;
    priority_queue<pii, vector<pii>, greater<pii> > fila;

    fila.push({0,qual});
    if(marca[qual].first!=-1 and marca[qual].s>=tamanho)
    {

        melhor=min(melhor,marca[qual].s);

    }
    while(fila.empty()==false)
    {
        ll dat = fila.top().first;
        ll nat = fila.top().s;
        fila.pop();
        for(int i=0;i<graph[nat].size();i++)
        {
            ll distancia = graph[nat][i].f;
            int olhando = graph[nat][i].s;
            if(marca[olhando].f!=-1 and marca[olhando].s>=tamanho)
            {
                melhor=min(melhor,2*(dat+distancia)+marca[olhando].s);
            }
            if(dist[olhando]>dat+distancia)
            {
                dist[olhando]=dat+distancia;
                fila.push({dat+distancia,olhando});
            }
        }
    }
    if(melhor==LINF){return -1;}
return melhor;
}

int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);


while(cin>>s>>t)
{
    help=1;
   graph.clear();
   graph.resize(s);
   visitados.clear();
   visitados.resize(s,0);
   pais.clear();
   pais.resize(s,{-1,0});
   marca.clear();
   marca.resize(s,{-1,0});
   for(int i=0;i<t;i++)
   {
       ll a;
       ll b;
       ll v;
       cin>>a>>b>>v;
       a--;
       b--;
       graph[a].pb({v,b});
       graph[b].pb({v,a});
   }
   visitados[0]=0;
   dfs(0,0);

   for(int i=0;i<ciclos.size();i++)
   {
       calc(ciclos[i]);
       help++;
   }

   int q;
   cin>>q;
   while(q--)
   {
       int qual;
       cin>>qual;
       qual--;
       ll tamanho;
       cin>>tamanho;
       dist.clear();
       dist.resize(s,LINF);
       dist[qual]=0;
       cout<<dijkstra(qual,tamanho)<<endl;
   }
}

    return 0;
}
