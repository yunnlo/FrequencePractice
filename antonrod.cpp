#include<cstdio>
#include <algorithm> 
using namespace std;

int main(){
    int n=0, L=0; 
    int MAX_N =L;
    int x[MAX_N];
    scanf("%d %d", &n, &L);
    if(n<L)for(int i=0;i<n;i++){
        scanf("%d", &x[i]);
        printf("antid %d position %d\n",i+1, x[i]);
    }
    else {
        printf("too much ants");
        return 0;
    }
    
    int min_time=0;
    for(int i=0;i<n;i++){
        min_time=max(min_time,min(x[i],L-x[i]));
    }
    int max_time=0;
    for(int i=0;i<n;i++){
        max_time=max(max_time,max(x[i],L-x[i]));
    }
    printf("MAX Time %d\n",max_time);   
    printf("Min Time %d\n",min_time);
    return 0;
}