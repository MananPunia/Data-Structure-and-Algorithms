#include<iostream>
#include<string>
using namespace std;
 
bool function(string str ,int i){
    if( i >= (str.length()-1-i) || str[str.length()-i-1] != str[i]) return false;
    function(str , i+1);
    return true;
}
// bool function(string str ,int i , int j){
//     if( i >= j || str[i] != str[j]) return false;
//     function(str , i+1 , j-1);
//     return true;
// }
 
int main(){
    string str = "abccba";
    cout<<function(str , 0);
    return 0;	
}