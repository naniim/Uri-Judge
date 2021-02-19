#include <bits/stdc++.h>


using namespace std;
typedef long long ll;



int main ()
{
int n;
cin>>n;
for (int i=0;i<n;i++)
{
    string s;
    cin>>s;
    int aux1=0;
    int aux2=0;
    for (int j=0;j<s.size();j++)
    {
        if(s[j]=='<'){aux1++;}
        if(s[j]=='>' and aux2+1<=aux1){aux2++;}
    }
    cout<<aux2<<endl;
}
return 0;
}
