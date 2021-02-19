#include <bits/stdc++.h>


using namespace std;

int main (){
int n;
int m;
int t;
cin>>n;
cin>>m;
cin>>t;
int res=n+m+t;
if(res<0){res+=24;}
else if (res>24){res=res-24;}

cout<<res<<endl;
return 0;
}


