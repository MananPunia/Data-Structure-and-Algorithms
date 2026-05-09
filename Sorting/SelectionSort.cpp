#include<bits/stdc++.h>
using namespace std;
 
void SelectionSort(vector<int>&nums){
    int n = nums.size();
    for(int i = 0 ; i < n-1 ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if(nums[j] < nums[min]) min = j;
        }
        swap(nums[min] , nums[i]);
    }
}
 
int main(){
    vector <int> nums = {17 , 5, 12, 73 , 32 , 1 , 4};
    SelectionSort(nums); 

    for(int i = 0 ; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;	
}