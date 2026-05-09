// Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.
#include<iostream>
#include<vector>
using namespace std;
 
void function(int i , vector<int> &ds , int arr[] , int k , int n){
    if(i >= n){
        int sum = 0;
        for(int i = 0 ; i < ds.size() ; i++)
            sum += ds[i];
        
        if(sum == k){
        for (auto it : ds)
            cout<<it << " ";
        cout << endl;
        return;
        }
        return;
    }

    ds.push_back(arr[i]);
    function(i+1 , ds , arr ,k , n);

    ds.pop_back();
    function(i+1 , ds , arr ,k , n);

}
 
int main(){
    int arr[] = {4, 9, 2, 5, 1};
    int k = 10;
    int n = 5;
    vector <int> ds;
    function(0 , ds , arr , k , n);
    return 0;	
}