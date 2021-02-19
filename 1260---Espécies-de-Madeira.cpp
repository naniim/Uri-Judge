#include <bits/stdc++.h>

using namespace std;
vector <string> arvore;
string nome;

double buscab (string a)
{
    int ini=0; int fim=arvore.size()-1; int meio;

    while (ini<=fim)
    {
        meio=(ini+fim)/2;
        if(arvore[meio]==a){return upper_bound(arvore.begin(),arvore.end(),a)-lower_bound(arvore.begin(),arvore.end(),a);}
        if(arvore[meio]>a){fim=meio-1;}
        if(arvore[meio]<a){ini=meio+1;}
    }
}

int main () {

int n;
cin>>n;
cin.get();
getline(cin, nome);
map <string,double> resultado;
for (int i=0;i<n;i++)
{ arvore.resize(0);
resultado.clear();
    while (getline(cin,nome) and nome[0]!='\0')
    {

     arvore.push_back(nome);

    }
    if(i>0){cout<<endl;}
    sort(arvore.begin(),arvore.end());
    for(int i=0;i<arvore.size();i++)
    {
        double d= buscab(arvore[i])/arvore.size();
