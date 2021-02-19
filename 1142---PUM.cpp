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
int i=0;
cin>>n;
int c=1;
while(c<=n)
{
    for(int j=1;j<=3;j++)
    {
        cout<<j+i<<" ";
    }
    cout<<"PUM"<<endl;
    i+=4;
    c++;
}
return 0;
}
