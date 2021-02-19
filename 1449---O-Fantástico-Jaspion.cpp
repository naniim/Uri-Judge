#include<bits/stdc++.h>

using namespace std;
   int t;
    int m;
    int n;

    map <string,string> mapa;
    string comparar;
    vector<string> traduzir;
    string trad;
    vector<string> traduzido;
    string portugues;
    string japones;




int main ()
{

    cin>>t;
    for (int i=0;i<t;i++)
    {
        mapa.clear();

traduzir.clear();
        portugues.clear();
        japones.clear();
        cin>>m;
        cin>>n;
cin.ignore();
        for (int j=0;j<m;j++)
        {

               getline(cin,japones);


            getline(cin,portugues);

