#include<iostream>
#include<string>
using namespace std;

int main(){

    string input,output;
    cin >> input;
    output = input;
    int k = output.length();
    int j = k-1;
    for(int i = 0; i < k; i++){
        output[i] = input[j];
        j--;
    }
    if(input == output){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}