#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
string nome;
double x,y;
cout<< fixed << setprecision(2);
cin>>nome>>x>>y;
cout<<"TOTAL = R$ "<<x+(y*15)/100<<endl;
return 0;
}

