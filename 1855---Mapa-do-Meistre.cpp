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
cin>>n;
cin>>m;
vector<vector<char> > v(m,vector<char> (n));
for (int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>v[i][j];
    }
}
int cont=0;
char atual=v[0][0];
pair<int, int> pos= make_pair(0,0);
while(true)
{
    cont++;
    if(cont==100000){break;}
