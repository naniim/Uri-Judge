#include <bits/stdc++.h>


using namespace std;
vector <int> vetor [59];




int main()
{
int n;
cin>>n;
int m;
int a;
int b;
int x;
int y;
set<pair <int, int > >spar;
for (int t=0;t<n;t++)
{
    cin>>m;
    cin>>a;
    cin>>b;
    spar.clear();
    for (int i=0;i<b;i++)
    {
        cin>>x;
        cin>>y;
        vetor[x].push_back(y);
        vetor[y].push_back(x);
        if(spar.find(make_pair(x,y))!=spar.end() or spar.find(make_pair(y,x))!=spar.end()){}
        else{spar.insert(make_pair(x,y));}
    }
    cout<<spar.size()*2<<endl;
}

 return 0;
}
