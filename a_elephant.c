#include<stdio.h>
int main(){
    int x, cnt=0;
    scanf("%d",&x);
    for(int i = 5; i>=0 ; i--){
        if(i==0){
            i=5;
        }
        x-=i;//5 4 3 2 1
        cnt++;
        if(x==0){
            break;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
//https://codeforces.com/problemset/problem/617/A