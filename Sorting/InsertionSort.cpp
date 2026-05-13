#include<bits/stdc++.h>
using namespace std;
 
void InsertionSort(vector<int>&nums){
    int n = nums.size();
    for(int i = 1 ; i < n ; i++){
        for(int j = i ; j > 0 ; j--){
            if(nums[j] < nums[j-1]){
                swap(nums[j],nums[j-1]);   
            }
        }
    }
}
 
int main(){
    vector<int> nums = {14,9,15,12,6,8,13};
    InsertionSort(nums);
    for(int  i = 0 ; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;	
}