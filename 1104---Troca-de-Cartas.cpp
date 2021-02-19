#include <bits/stdc++.h>

using namespace std;


int main () {

int n;
int m;
int o;
int p=0;
set <int> s1;
set <int> s2;
vector<int> res;
while (true)
{
    s1.clear();
    s2.clear();
    cin>>n;
    cin>>m;
    int c=0;
     p=0;
    if(n==0 and m==0){break;}
    for (int i=0;i<n;i++)
    {
        cin>>o;
        s1.insert(o);
    }
    for (int i=0;i<m;i++)
    {
        cin>>o;
        s2.insert(o);
    }
    for(set<int>::iterator it=s1.begin(); it!=s1.end(); it++)
    {
        if(s2.find(*it)==s2.end() ){c++;}
    }
    for(set<int>::iterator ito=s2.begin();ito!=s2.end();ito++)
    {
        if(s1.find(*ito)==s1.end() ){p++;}
    }


res.push_back(min(c,p));

}

for (int i=0;i<res.size();i++)
{
    cout<<res[i]<<endl;
}


