#include<iostream>
#include<string.h>
using namespace std;
 
void function(int n){
    if(n == 0) return;
    cout << "Manan Punia \n";
    return function(n-1);
}
 
int main(){
    function(5);
    return 0;	
}