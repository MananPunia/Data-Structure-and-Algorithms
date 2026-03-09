#include<iostream>
using namespace std;
 
int function(int n){
    if(n <=1) return n;
    return function(n-2) + function(n-1);
}
 
int main(){
    int n;
    cin >> n;
    cout << function(n);
    return 0;	
}