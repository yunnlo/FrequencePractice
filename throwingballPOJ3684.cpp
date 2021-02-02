#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

const int g =10;
int N,H,R,T; //number of ball; height; R; time
double y[100];
double calc(int T){
    if(T<0) return H;
    double t = sqrt(2*H/g);
    int k = (int)(T/t);
    double d;
    if(k%2 ==0){
        d=T-k*t;
    }else{
        d=k*t+t-T;
    }
    return H-g*d*d/2;

}
void solve(){
    for (int i=0;i<N;i++){
        y[i]=calc(T-i);
    }
    sort(y,y+N);
    for(int i=0;i<N;i++){
        printf("%.2f ",y[i]+2*R*i/100.0);
    }
}
int main(){
    scanf("%d %d %d %d", &N, &H, &R, &T);  
    solve();
    return 0;
}