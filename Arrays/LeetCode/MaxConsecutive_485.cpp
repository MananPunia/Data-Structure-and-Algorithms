/*Given a binary array nums, return the maximum number of consecutive 1's in the array.
    Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

SC: 1 <= nums.length <= 105
    nums[i] is either 0 or 1.
*/
//this was easy:
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0 , marker = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                a++;
                if(marker < a) marker = a;
            }
            else a = 0;            
        }
        return marker;
    }
};