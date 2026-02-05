#include<iostream>
using namespace std;
 
int functio(int n){
    if(n <= 1) return 1;
    return n * functio(n-1);
}
 
int main(){
    cout<< functio(5);
    return 0;	
}