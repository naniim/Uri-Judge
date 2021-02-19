#include <bits/stdc++.h>


using namespace std;
int fib (int a)
{
  if (a<=2){return 1;}
    else {return fib(a-1)+fib(a-2);}
}
int nfib (int a)
{
    if (a==1 or a==0){return 1;}
    else {return 1+nfib(a-1)+nfib(a-2) ;}
}
int main (){
int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    int a;
    cin>>a;
    int c=0;
  int f=  fib(a);
  int n= nfib(a)-1;
cout<<"fib("<<a<<") = "<<n<<" calls = "<<f<<endl;

}

return 0;
}
