#include <bits/stdc++.h>


using namespace std;
typedef long long ll;



int main ()
{
while (true)
{
    int n;
    cin>>n;
    if(n==0)break;
    vector<int>descartadas;
    deque<int>atuais;
    for (int i=n;i>=1;i--)
    {
        atuais.push_back(i);
    }
    while(atuais.size()!=1)
    {
        descartadas.push_back(atuais[atuais.size()-1]);
        atuais.pop_back();
        atuais.push_front(atuais[atuais.size()-1]);
        atuais.pop_back();
    }
    cout<<"Discarded cards: ";
    for(int i=0;i<descartadas.size();i++)
    {
        if(i!=descartadas.size()-1)cout<<descartadas[i]<<", ";
        else{cout<<descartadas[i]<<endl;}
    }
    cout<<"Remaining card: "<<atuais[0]<<endl;
}
return 0;
}

