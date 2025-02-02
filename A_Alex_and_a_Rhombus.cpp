#include<iostream>
using namespace std;

//get n , then output will be op = n*n, if n>=2 then, more = n-1;, and op += (more*more) ; op will be output
int main(){
    int n, add, a,m;
    cin>>n;
    add = n*n;
    if(n>=2){
        a = n-1;
        m = a*a;
        add += m;
    }
    cout << add <<endl;
    return 0;
}

//A. Alex and a Rhombus
/*
While playing with geometric figures Alex has accidentally invented a concept of a n
-th order rhombus in a cell grid.

A 1
-st order rhombus is just a square 1×1
 (i.e just a cell).

A n
-th order rhombus for all n≥2
 one obtains from a n−1
-th order rhombus adding all cells which have a common side with it to it (look at the picture to understand it better).

*/