#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
int main ()
{
float a;
float b;
float c;
float d;
float e;
cin>>a>>b>>c>>d;
float t= (a*2 + b*3 + c*4 + d*1)/10;
cout<<setprecision(1)<<fixed;
cout<<"Media: "<<t<<endl;
if(t>=7.0){cout<<"Aluno aprovado."<<endl;}
else if(t<5.0){cout<<"Aluno reprovado."<<endl;}
else
    {
        cout<<"Aluno em exame."<<endl;

        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        float t2=(t+e)/2;
        if(t2>=5.0){cout<<"Aluno aprovado."<<endl<<"Media final: "<<t2<<endl;}


    }



return 0;
}

