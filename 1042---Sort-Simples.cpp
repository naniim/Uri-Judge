#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
int a;
int b;
int c;
cin>>a>>b>>c;
int vetor[5];
int vetor2[5];
vetor2[0]=a;
vetor2[1]=b;
vetor2[2]=c;
vetor[0]=a;
vetor[1]=b;
vetor[2]=c;
sort(vetor, vetor+3);
cout<<vetor[0]<<endl<<vetor[1]<<endl<<vetor[2]<<endl;
cout<<endl;
cout<<vetor2[0]<<endl<<vetor2[1]<<endl<<vetor2[2]<<endl;
return 0;
}
