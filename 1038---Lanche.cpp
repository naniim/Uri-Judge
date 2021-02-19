#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
double cod;
int qntd;
cin>>cod;
if(cod==1){cod=4;}
else if(cod==2){cod=4.50;}
else if(cod==3){cod=5;}
else if(cod==4){cod=2;}
else if(cod==5){cod=1.50;}
cin>>qntd;
cout<<setprecision(2)<<fixed;
cout<<"Total: R$ "<<cod*qntd<<endl;



return 0;
}

