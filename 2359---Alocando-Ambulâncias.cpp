#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


vector<pii>graph[1010];
bool visitados[1010];
ll distancia [1010];
vector<int> sources;

 void  dijsktra()
 {
     priority_queue<pii,vector<pii>,greater<pii> > fila;
    for(int i=0;i<sources.size();i++)
    {
        fila.push(make_pair(0,sources[i]));
    }
    while(true)
    {
        int davez=-1;
        while(!fila.empty())
        {
            int atual=fila.top().s;
            fila.pop();
            if(!visitados[atual]){davez=atual; break;}
        }
        if(davez==-1){break;}
        visitados[davez]=true;
        for(int i=0;i<graph[davez].size();i++)
        {
            int dist = graph[davez][i].f;
