#include <bits/stdc++.h>

using namespace std;

int main (){
int a;
cin>>a;
int t=0;
for (int i=0;i<5;i++)
{
    int b;
    cin>>b;
    if(b==a){t++;}
}
cout<<t<<endl;
return 0;
}
