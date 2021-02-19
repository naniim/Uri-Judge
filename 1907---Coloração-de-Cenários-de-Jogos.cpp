#include <bits/stdc++.h>


using namespace std;

int componente [1030][1030];
char matriz [1030][1030];
int n;
int m;

void dfs (int e, int f)
{
    for(int i=e-1;i<=e+1;i++)
    {
        if(componente[i][f]==0 and i>=1 and i<=n and matriz[i][f]=='.'){componente[i][f]=componente[e][f]; dfs(i,f);}
    }
    for(int i=f-1;i<=f+1;i++)
    {
        if(componente[e][i]==0 and i>=1 and i<=m and matriz[e][i]=='.'){componente[e][i]=componente[e][f]; dfs(e,i);}
    }
    return;
}
int main()
{

cin>>n;
cin>>m;
char a;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        cin>>matriz[i][j];
        componente[i][j]=0;
    }
}
int c=0;
for (int i=1;i<=n;i++)
{
