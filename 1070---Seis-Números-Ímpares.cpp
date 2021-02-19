#include <bits/stdc++.h>

using namespace std;







int main(){
int n;
cin>>n;
int c=0;
if(n%2==1){cout<<n<<endl; c++;}
while (true)
{
    if(n%2==0){n+=1; cout<<n<<endl; c++;}
    else{ n+=2; cout<<n<<endl;  c++;}
    if(c==6)break;
}

return 0;
}

