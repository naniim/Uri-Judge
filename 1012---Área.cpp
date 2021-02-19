#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
cout<< fixed << setprecision(3);
double x, y, z;
cin>>x>>y>>z;
cout<<"TRIANGULO: "<<(x*z)/2<<endl;
cout<<"CIRCULO: "<<3.14159*z*z<<endl;
cout<<"TRAPEZIO: "<<((x+y)*z)/2<<endl;
cout<<"QUADRADO: "<< y*y<<endl;
cout<<"RETANGULO: "<< x*y<<endl;
}

