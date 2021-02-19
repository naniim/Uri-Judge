#include <bits/stdc++.h>

using namespace std;




int main (){
int x;
int y;
while(true){
cin>>x>>y;
if(x==0)break;
if(y==0)break;
if (x>0 and y>0){cout<<"primeiro"<<endl;}
if(x<0 and y>0){cout<<"segundo"<<endl;}
if(x<0 and y<0){cout<<"terceiro"<<endl;}
if(x>0 and y<0){cout<<"quarto"<<endl;}
}
return 0;
}

