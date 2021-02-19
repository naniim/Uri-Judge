#include <bits/stdc++.h>

using namespace std;




int main (){

int n;
int t=0;
cin>>n;
for (int i=0;i<n;i++)
{
    int a;
    int b;
    cin>>a>>b;
    if(b<a){t+=b;}
}
cout<<t<<endl;
return 0;
}
