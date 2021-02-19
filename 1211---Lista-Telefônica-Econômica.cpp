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


while (true)
{
    int n;
    string atual;
    ll ans=0;
    cin>>n;
    if(cin.eof())break;


    vector<string> vs;
    for(int i=0;i<n;i++)
    {
        string bb;
        cin>>bb;
        vs.pb(bb);
    }
    sort(vs.begin(),vs.end());
    atual=vs[0];
    for(int i=1;i<vs.size();i++)
