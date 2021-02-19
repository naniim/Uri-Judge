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
vector<ll> v(n);

for(int i=0;i<n;i++)
{
    cin>>v[i];

}
ll kadane =0;
ll ikadane=0;
ll sum=0;
ll total=0;
for(int i=0;i<n;i++)
{
    sum=max(v[i],sum+v[i]);
    kadane=max(kadane,sum);
    total+=v[i];
}
