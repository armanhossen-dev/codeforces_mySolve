#include<stdio.h>
#include<string.h>
int main(){
    int n, x = 0; //2
    char input1[3];
    scanf("%d",&n);
    if(1<=n<= 150){
        for(int i = n; i>= 1; i--){
            scanf("%s",&input1);
            if((strcmp(input1, "++X"))==0){
                ++x;
            }
            else if((strcmp(input1, "--X"))==0){
                --x;
            }   
            else if((strcmp(input1, "X++"))==0){
                x++;
            }
            else if((strcmp(input1, "X--"))==0){
                x--;
            }   
    }
    }
    printf("%d\n",x);
    return 0;
}