#include <bits/stdc++.h>


using namespace std;
vector<int> v;
void marca()
{
     int c=2;
 for (int i=1;i<10000000;i++)
 {

     v.push_back(v[i-1]+c);
     c++;
 }
 return;
}
int main (){
int n;
cin>>n;
v.push_back(2);
 marca();
for (int i=0;i<n;i++)
{
    int m;
    cin>>m;
cout<<v[m-1]<<endl;
}
return 0;
}

