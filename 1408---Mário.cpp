#include <bits/stdc++.h>

using namespace std;


int main ()
{
 int n;
 int l;
  vector<int> v;
 int menor=10000000;
 int dif;
 int a;
 while (true){
 cin>>n;
 cin>>l;
 if (n==0 and l==0 ){break;}
 menor=100000000;
 v.clear();
 for (int i=0;i<l;i++)
 {
     cin>>a;
     v.push_back(a);
 }
for (int i=0;i<l;i++)
{
   int re= upper_bound(v.begin(), v.end(), v[i]+n-1 )-v.begin();


dif = n-(re-i);
if (menor>dif){menor=dif;}
}
cout<<menor;
cout<<endl;
 }
    return 0;
}
