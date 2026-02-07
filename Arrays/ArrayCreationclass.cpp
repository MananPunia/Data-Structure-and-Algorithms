#include<iostream>
#include <vector>
using namespace std;
 
int function(){
}
 
int main(){
    int t;
    cin >> t;
    while(t){
    vector <int> arr;
    int n;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    cout <<endl<< "Your Entered vector" << endl;
    for (int i; i < n ; i++){
        cout<< arr[i] << " ";
    }

    function();
}

    return 0;
}