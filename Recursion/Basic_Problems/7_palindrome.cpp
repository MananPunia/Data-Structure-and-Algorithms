#include<iostream>
using namespace std;
 
int function(int n){
    if(n <= 1) return 0;
    int zen = (n-1) + function(n-2);
    return zen;
}
 
int main(){
    int n;
    cin>> n;
    cout << function(n)-1;
    return 0;
}


//0 1 1 2 3 5 8 13