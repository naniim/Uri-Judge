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
    int d;
    cin>>n;
    cin>>d;
    if(n==0 and d==0)break;
    vector<int> v;
    string s;
    cin>>s;
int dd=d;
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'0';
        v.pb(a);
    }
    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        while(d>0 and  ans.size()>0 and v[i]>ans.back() )
