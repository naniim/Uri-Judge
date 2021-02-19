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
while(true)
{
    cin>>n;
    if(n==0)break;
    int x;
    int y;
    cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        int a;
        int b;
        cin>>a>>b;
        if(a==x or y==b){cout<<"divisa"<<endl;}
        else
