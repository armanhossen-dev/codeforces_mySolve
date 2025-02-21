//want to buy w banana
//has to pay k dollars for 1st bananan
//2k for second
//n dollars he has
//k n w
//each banana price, money he has, want to buy how many
#include<iostream>
#include <cstdlib>  // For abs(int)
using namespace std;
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int moneyNeeded = 0;
    for(int i =1 ; i<= w; i++){
        moneyNeeded += i*k;
    }
    
    if(moneyNeeded > n){
        cout << abs(moneyNeeded - n) << endl;
    }else{
        cout << 0 << endl;
    }
}
