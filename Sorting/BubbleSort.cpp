#include<bits/stdc++.h>
using namespace std;
 
void BubbleSort(vector<int>&nums){
    int n = nums.size();
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(nums[j+1] < nums[j]) swap(nums[j] , nums[j+1]);
        }
    }
}
void Printfn(vector<int>&nums){
    for(int i = 0 ; i < nums.size() ;i++){
        cout << nums[i]<<" ";
    }
}

int main(){
    vector <int> nums = {13,46,24,52,20,9};
    BubbleSort(nums);
    Printfn(nums);
    return 0;	
}