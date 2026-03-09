#include<iostream>
using namespace std;
 
int function(){
}
 
int main(){
    int n; 
    cin >> n;
    int a = 0 , b = 1;
    for(int i = 0 ; i < n ; i++){
        int c = a+b;
        a =b ; 
        b = c;
    }
    cout<< a;
    return 0;	
}