#include <bits/stdc++.h>

using namespace std;


int fatorial (int x)
{
    if (x==1){return 1;}
    else {return x*fatorial(x-1);}
}



int main (){
int a;
cin>>a;
cout<<fatorial(a)<<endl;
return 0;
}
