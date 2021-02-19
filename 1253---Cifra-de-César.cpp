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
while(n!=0)
{
n--;
string palavra;
cin>>palavra;
int desloc;
cin>>desloc;
for(int i=0;i<palavra.size();i++)
{
    if(palavra[i]-desloc>='A'){palavra[i]-=desloc;}
    else
    {
        int aux=palavra[i]-'A';
    palavra[i]=char('Z'-(desloc-1-aux));

    }
  cout<<palavra[i];
}
cout<<endl;
}
return 0;
}

