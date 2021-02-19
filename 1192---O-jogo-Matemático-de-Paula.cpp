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
int t;
cin>>t;
while(t!=0)
{
 t--;
 string s;
 cin>>s;
 if(s[0]==s[2])
 {
     cout<<(s[0]-'0')*(s[2]-'0')<<endl;
 }
 else if(s[1]>='a' and s[1]<='z')
 {
     cout<<(s[0]-'0')+(s[2]-'0')<<endl;
 }
 else
 {
     cout<<(s[2]-'0')-(s[0]-'0')<<endl;
 }
}

return 0;
}

