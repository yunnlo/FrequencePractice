#include<cstdio>
#include <algorithm> 
using namespace std;

const int Max_n =100;
int n,W;
int w[Max_n], v[Max_n];
int rec(int i, int j) {
    int res;
    if (i==n){
        res == 0;
    }else if (j<w[i]){
        res = rec(i+1,j);
    }else{
        res = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
    }
    return res;
}

void solve() {
    printf("%d\n", rec(0,W));
}
int main(){
    scanf("%d/n", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &w[i], &v[i]);
    }
    scanf("%d/n", &W);
    printf("totally have %d items \n",n);
    printf("My bags can afford %d \n",W);
    solve();
    return 0;
}