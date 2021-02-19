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
cin.ignore();
while(t!=0)
{
    t--;
    string a;
   getline(cin,a);

   for(int i=0;i<a.size();i++)
   {
       if(a[i]>='a' and a[i]<='z' or a[i]>='A' and a[i]<='Z')
       {a[i]+=3;}
   }

   reverse(a.begin(),a.end());
   for(int i=a.size()/2; i<a.size();i++)
   {
       a[i]--;
   }
cout<<a<<endl;
