#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =8;
int n, ans;
int v1[max_n][max_n];
void solve(){
    int a[max_n]={0};
    int sum =0;
    for(int i=0;i<n;i++){
        int weight=2^8;
        for(int q=0;q<n;q++){
            weight *=0.5;
            a[i] += weight*v1[i][q];
        }
    }
    for (int q=0;q<n;q++){
        for(int i=0; i<n;i++){
        if(a[i]<a[i+1]){
            swap(a[i],a[i+1]);
            sum++;
        }
    }
    }
    printf("total step %d", sum);
}


int main(){
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int q=0; q<n;q++){
            scanf("%d", &v1[i][q]);
        } 
    }
    solve();
    return 0;
}