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

int x;
int y;
int a;
int b;
cin>>x>>y>>a>>b;
int horas=0;
int minutos=0;
int geral=0;
if(x*60+y>=a*60+b){a+=24;}
geral=a*60+b - (x*60+y);

while(geral>=60)
{
    geral-=60;
    horas++;
}

cout<<"O JOGO DUROU "<<horas<<" HORA(S) E "<<geral<<" MINUTO(S)"<<endl;
     return 0;

