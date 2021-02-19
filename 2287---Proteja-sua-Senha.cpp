#include <bits/stdc++.h>

using namespace std;

vector<int> s1;
vector <int> s2;
vector <int> s3;
vector <int> s4;
vector <int> s5;
vector <int >s6;
vector <int> re;

int main (){

  int h=1;
while (true){

        s1.clear();
s2.clear();
s3.clear();
s4.clear();
s5.clear();
s6.clear();
re.clear();
    int n;
cin>>n;
if(n==0){break;}
for(int i=0;i<n;i++)
{
 re.clear();
for (int j=0;j<10;j++)
{
    int a;
    cin>>a;
    re.push_back(a);
}
for(int j=0;j<6;j++)
{
    char a;
    cin>>a;
