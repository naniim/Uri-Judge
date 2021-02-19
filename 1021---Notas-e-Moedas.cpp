    #include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
double n;
cin>>n;

int aux=n;
double aux2=n-aux;

int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
int g=0;
int h=0;
int i=0;
int j=0;
int k=0;
int l=0;
if(aux>=100)
{
    a=aux/100;
    aux-=a*100;
}
if(aux>=50)
{
    b=aux/50;
    aux-=b*50;
}
if(aux>=20)
{
    c=aux/20;
    aux-=c*20;
}
