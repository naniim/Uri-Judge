#include <bits/stdc++.h>

using namespace std;




int main (){

    int r;
    cin>>r;
    for (int j=0;j<r;j++){
int n;
cin>>n;
int a=1;
int t=0;
for (int i=1;i<=n;i++)
{
    t+=a;
    a*=2;
}
cout<<t<<endl;
    }
return 0;
}

