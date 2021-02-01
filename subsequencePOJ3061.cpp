#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =10000;
int n, S;
int a[max_n]={0};

void solve(){
   int lenth=n+1;
   int sum=0,e=0,s=0;
   while(1){
        while (e<n && sum<S){
            sum +=a[e++];
        }
        if(sum<S) break;
        lenth =min(lenth,e-s);
        sum -= a[s++];  
    }
    if(lenth>n){
        lenth=0;
    }
    printf("%d",lenth);
}
int main(){
    scanf("%d %d", &n, &S);
    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    solve();
    return 0;
}