#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
cout << fixed << setprecision(2);
int A, B, D, E;
double C, F;
cin>>A>>B>>C>>D>>E>>F;
cout<<"VALOR A PAGAR: R$ "<<(B*C) + (E*F)<<endl;
return 0;
}

