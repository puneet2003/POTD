//link : https://leetcode.com/problems/search-insert-position/?fbclid=IwAR0PYaBuiPTo-Qvy5gkVrgTzY3n3AbmRDkny3tVxpJoPlYIIApTGEJ3fTcI
//Tc : O(N) Please use binary search so that complexity will be O(logN)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i]==target){
        //         return i;
        //         break;
        //     }
        // }
        
        // for(int i=0; i<n-1; i++){
        //     if(nums[i]<target && target<nums[i+1]){
        //         return (i+1);
        //         break;
        //     }
        // }
        // if(target>nums[n-1]){
        //     return n;
        // }
        // return 0;/
        int low=0;
        int up=nums.size()-1;
        int mid;
        if(target > nums[up]){
            return nums.size();
        }
        if(target < nums[low] ){
            return low;
        }
        while(low<=up){
            mid = ( low + up ) / 2;
            if( target < nums[mid] ){
                up = mid - 1;
            }
            if( target > nums[mid] ){
                low = mid + 1;
            }
            if( target == nums[mid] ){
                return mid;
            }
            if(low == up && target > nums[low]){
                return low+1;
            }
            if(low == mid && target < nums[low]){
                return low;
            }
        }
        return 0;
    }
};
