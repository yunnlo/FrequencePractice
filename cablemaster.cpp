#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =10000;
int N, K;
float L[max_n];

bool C (double X){
    int num =0;
    for (int i=0;i<N;i++){
        num += (int)(L[i]/X);
    }
    return num>=K;
}
void solve(){
   double lb=0.0, ub=1000.0;
   while(ub-lb>0.005){
       double mid = (lb+ ub)/2;
       if(C(mid)) lb=mid;
       else ub=mid-0.005;
   }
   printf("%.2f",ub);
}
int main(){
    scanf("%d %d", &N, &K);
    for(int i=0; i<N;i++){
        scanf(" %f", &L[i]);
    }
    solve();
    return 0;
}
