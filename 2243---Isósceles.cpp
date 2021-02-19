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
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
vector<int>aux(n,0);
if(n%2==0)
{
    aux[0]=1;

    for(int i=1;i<n;i++)
    {
        aux[i]=min(aux[i-1]+1,v[i]);
    }
    aux[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
