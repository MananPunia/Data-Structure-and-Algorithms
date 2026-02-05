#include<iostream>
using namespace std;
 
void function(int n){
    if(n == 6) return;  
    function(n+1);
    cout << n << " ";
}
 
int main(){
    function(1);
    return 0;	
}
