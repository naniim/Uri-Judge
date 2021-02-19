#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
double a;
double b;
double c;
cin>>a>>b>>c;
long double delta = b*b - (4*a*c);
if(delta<0 or a==0.0){cout<<"Impossivel calcular"<<endl;}
else{
double r1 =(-1*b + sqrt(delta))/(2*a);
double r2 =(-1*b - sqrt(delta))/(2*a);

cout<<setprecision(5)<<fixed;
cout<<"R1 = "<<r1<<endl;
cout<<"R2 = "<<r2<<endl;


}
return 0;
}
