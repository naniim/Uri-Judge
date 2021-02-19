#include <bits/stdc++.h>

using namespace std;




int main (){
int f;
int t=0;
cin>>f;
int n;
cin>>n;
for (int i=0;i<n;i++)
{
    int a;
    cin>>a;
    if(a*f>=40000000){t++;}
}
cout<<t<<endl;
return 0;
}
