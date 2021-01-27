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
        int a=-1, b=0, save =0;
        for(int i=0;i<Q-1;i++){
            if(v1[i+b]>P-v1[Q-i+a]){
                sum +=v1[i+b];
                save +=sum;
                v1[i+b+1] -= v1[i+b]+1;
                a +=1;
            }
            else{
                sum +=P-v1[Q+a-i];
                save +=sum;
                P=v1[Q-1-i]-1;
                b -=1;
            }
        }
    total -= save;
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
