#include <bits/stdc++.h>

using namespace std;

int somadepre[10000];

int main(){

while (true){
int n;
int custo;
cin>>n;

if (cin.eof())break;
for (int i=0;i<1000;i++)
{
somadepre[i]=0;
}

cin>>custo;

for (int i=1;i<=n;i++)
{
    int o;
    cin>>o;
    somadepre[i]=somadepre[i-1]+o-custo;

}
int maior=0;

for (int i=1;i<=n;i++)
{
    for (int j=i;j<=n;j++)
    {
        if(somadepre[j]-somadepre[i-1]>maior){maior=somadepre[j]-somadepre[i-1];}
    }
}
cout<<maior<<endl;
}
return 0;
