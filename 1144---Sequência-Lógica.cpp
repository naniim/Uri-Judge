#include <bits/stdc++.h>

using namespace std;

int main (){
int a=1;
int b=1;
int c=1;
int ma=12;
int mb=2;
int mc=6;
int n;
cin>>n;

for (int i=1;i<=n;i++)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<a<<" "<<b+1<<" "<<c+1<<endl;
    a+=1;
    b+=mb+1;
    mb+=2;
    c+=mc+1;
    mc+=ma;
    ma+=6;
}

return 0;
}
