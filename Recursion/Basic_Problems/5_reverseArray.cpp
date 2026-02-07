#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void function(vector<int> &arr , int i , int n){
    if(i >= n/2) return;
    swap(arr[i] , arr[n-i-1]);
    function(arr , i+1 , n);

} 
 
// void function(vector <int>& arr, int i , int j){
//     if(i >= j) return;
//     swap(arr[i] , arr[j]);
//     function(arr ,i+1, j-1);
// }
 
int main(){
    vector <int> arr = {1,2,3,4,5};
    int n =arr.size();
    function(arr, 0 , n);
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i];
    }
    return 0;	
}   