#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
double a;
double b;
double c;
cin>>a>>b>>c;
cout<<setprecision(1)<<fixed;
if(abs(b-c)<a and a<b+c  and b>abs(a-c) and b<a+c and c>abs(a-b) and c<a+b){cout<<"Perimetro = "<<a+b+c<<endl;}
else{cout<<"Area = "<<((a+b)*c)/2<<endl;}
return 0;
}

