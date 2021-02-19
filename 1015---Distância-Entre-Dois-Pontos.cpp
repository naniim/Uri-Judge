#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
cout<< fixed << setprecision(4);
double w, x, y, z;
cin>>w>>x>>y>>z;
sqrt((y-w)*(y-w)+(z-x)*(z-x));
cout<<sqrt((y-w)*(y-w)+(z-x)*(z-x))<<endl;
}
