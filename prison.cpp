#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =100;
int P, Q, sum=0;
int v1[max_n];
void solve(){
    sort(v1,v1+Q);
    int total =0.5*Q*(2*P-Q-1);
    if(Q==1){
        printf("total spend %d", total);
    }
    else{
        for(int i=0;i<(Q+1)/2;i++){
            int a=-1, b=0;
            if(v1[i+b]>P-v1[Q-i+a]){
                sum +=sum+v1[i];
                v1[i+1] -= v1[i]+1;
                a +=1;
            }
            else{
                sum +=sum+P-v1[Q-1-i];
                P=v1[Q-1-i]-1;
                b -=1;
            }
        }
    total -= sum;
    printf("total spend %d", total);
    }
}
int main(){
    scanf("%d %d", &P, &Q);
    for(int i=0; i<Q;i++){
        scanf("%d", &v1[i]);
    }
    solve();
    return 0;
}