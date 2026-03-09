#include<iostream>
#include<vector>
using namespace std;
 
void printSubSequence(int i , vector<int>&ds , int arr[] , int n){
    if(i >= n){
        for(auto it : ds)
            cout << "["<<it<<"]"<< " ";
        cout << endl;
        return;
    }

    ds.push_back(arr[i]);
    printSubSequence(i + 1 , ds , arr , n);

    ds.pop_back();
    printSubSequence(i + 1 , ds , arr ,n);
}
 
int main(){
    int n = 3;
    int arr[] = {1,2,3};
    vector <int> ds;
    printSubSequence(0 , ds , arr , n);
    return 0;	
}