#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
double a;
double b;
cin>>a>>b;
if (a==0.0 and b==0.0){cout<<"Origem"<<endl;}
else if (a==0.0 and b!=0.0){cout<<"Eixo Y"<<endl;}
else if (a!=0.0 and b==0.0){cout<<"Eixo X"<<endl;}
else if (a>0 and b>0.0){cout<<"Q1"<<endl;}
else if (a>0 and b<0.0){cout<<"Q4"<<endl;}
else if (a<0 and b>0.0){cout<<"Q2"<<endl;}
else if (a<0 and b<0.0){cout<<"Q3"<<endl;}
return 0;
}

