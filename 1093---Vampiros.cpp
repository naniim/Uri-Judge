 #include <bits/stdc++.h>

using namespace std;
double gambler(int n1, int n2, int at)
{ double p;
if(at == 3){  return (double)n1/(double)(n1+n2); }
else{  p = 1.0 - (6-at)/6.0; p = (1 - p)/p; return (1.0 - pow(p,n1))/(1.0 - pow(p,n1+n2));

        }
}
int main() {
    int ev1,ev2,at,d,tmp;
    double prop;
    while(scanf("%d %d %d %d",&ev1,&ev2,&at,&d)==4&&ev1!=0&&ev2!=0&&at!=0&&d!=0)
    { tmp = ev1; ev1 = 0;
    while(tmp > 0){
    tmp -= d; ev1++; }
    tmp= ev2; ev2 = 0;
    while(tmp > 0){ tmp -= d; ev2++; }
    prop = gambler(ev1,ev2,at);
    printf("%.1f\n",prop*100); } return 0; }

