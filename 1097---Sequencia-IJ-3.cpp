#include <bits/stdc++.h>

using namespace std;







int main(){
int a=1;
int b=7;
int c=0;
while(a!=9 or b!=13 )
{
    cout<<"I="<<a<<" J="<<b<<endl;
     c++; b--;
     if(c==3){a+=2; b+=5; c=0;}
}
cout<<"I="<<9<<" J="<<b<<endl;
return 0;
}

