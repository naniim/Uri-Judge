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

int l;
int c;
int r1;
int r2;

cin>>l>>c>>r1>>r2;
if(c==0 and l==0 and r1==0 and r2==0){break;}
int hipotenusa =(l*l + c*c);
if(r1*2<=l and r1*2<=c and r2*2<=c and r2*2<=l and ((r1+r2)*(r1+r2)-2*(r1+r2)*(l+c)+l*l+c*c)>=0){cout<<"S"<<endl;}
else{cout<<"N"<<endl;}
}
return 0;
}

