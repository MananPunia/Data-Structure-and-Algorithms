#include<iostream>
using namespace std;
 
int function( int n){
    if(n < 1)return 0;
    
    return n + function(n-1);
}
 
int main(){
    cout << function(5);
    return 0;	
}