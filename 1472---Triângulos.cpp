#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector <int> v;

bool buscab (int x)
{
    int ini=0; int fim=v.size(); int meio;

    while (ini<=fim)
    {
        meio=(ini+fim)/2;

        if(v[meio]==x){return true;}
        if(v[meio]>x){fim=meio-1;}
        if(v[meio]<x){ini=meio+1;}
    }
return false;
}
int main ()
{

 int n;
 int c;
 int cont=0;
int m;

 while (true)
 {
     cont=0;
     v.clear();
     v.push_back(0);
     cin>>n;
if (cin.eof())break;
for (int i=1;i<=n;i++)
{
    cin>>m;
    v.push_back(m+v[i-1]);
}
