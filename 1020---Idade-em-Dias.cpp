#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
int n;
cin>>n;
int h=0;
int m=0;

if(n>=365)
{
    h=n/365;
    n-=h*365;
}
if(n>=30)
{
    m=n/30;
    n-=m*30;
}
cout<<h<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<n<<" dia(s)"<<endl;
return 0;
}

