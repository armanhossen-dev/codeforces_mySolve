#include<stdio.h>
int main(){

    int ar[5][5];
    int m,n;
    
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&ar[i][j]);
        }
    }
    
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
           //printf("%d ",ar[i][j]);
            if(ar[i][j]==1){
                m = i;
                n = j;
            } 
        }// printf("\n");
    }
    int count = 0;
    //to make m = 2; and n = 2;
    //printf("m = %d\nn  = %d\n",m,n);
    /*
    0 0 0 0 0
    0 0 0 0 1
    0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 0
    m = 1
    n  = 4
    */
    //m == 2 kor te hobe
    while(m<2){
        m++;
        count++;
    }
    while(m>2){
        m--;
        count++;
    }
    while(n>2){
        n--;
        count++;
    }
    while(n<2){
        n++;
        count++;
    }
    //printf("m = %d\nn = %d\n",m,n);
    printf("%d\n",count);
    

}