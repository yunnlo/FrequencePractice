#include <cstdio>
#include <algorithm>

using namespace std;

const int max_n =8;
int n, ans;
int v1[max_n], v2[max_n];
void solve(){
    sort(v1,v1+n);
    sort(v2,v2+n);
    ans=0;
    for(int i=0; i<n; i++){
        ans += v1[i]*v2[i];
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d", &v1[i]); 
    }
    for(int i=0; i<n;i++){
        scanf("%d", &v2[i]);
    }
    solve();
    printf("maxima %d", ans);
    return 0;
}