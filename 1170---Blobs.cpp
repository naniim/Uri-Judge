#include<bits/stdc++.h>

 #define f first
 #define s second
 #define pb push_back


using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int busca (int x)
{
    int i=0;
    int atual=1;
    while(true)
    {
        if(atual>=x){return i ;}

        i++;
        atual*=2;
    }
}




int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(true)
{
 t--;
 if(t<0)break;
 float n;
