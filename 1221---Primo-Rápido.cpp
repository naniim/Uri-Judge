#include<bits/stdc++.h>

 #define F first
 #define S second
 #define pb push_back
 #define make_pair MP

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);


int n;
cin>>n;
for (int i=0;i<n;i++)
{
    ll a;
    cin>>a;
    bool primo =true;
    for (int j=2;j*j<=a;j++)
    {
        if(a%j==0){primo=false;}
    }
    if(primo){cout<<"Prime"<<endl;}
    else{cout<<"Not Prime"<<endl;}
}
    return 0;

}

