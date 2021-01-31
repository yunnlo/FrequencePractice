#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =10000;
int N, K;
int L[max_n];

bool C (double X){
    int num =0;
    for (int i=0;i<N;i++){
        num += (int)(L[i]/X);
    }
    return num>=K;
}
void solve(){
   double lb=0, ub=max_n;
   for (int i=0;i<100;i++){
       double mid = (lb+ ub)/2;
       if(C(mid)) lb=mid;
       else ub=mid;
   }
   printf("%.2f",ub);
}
int main(){
    scanf("%d %d", &N, &K);
    for(int i=0; i<N;i++){
        scanf("%d", &L[i]);
    }
    solve();
    return 0;
}