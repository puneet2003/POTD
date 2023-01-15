//Binary search

//Problem 1
//https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int up=nums.size()-1;
        int mid;
        while( low <= up ){
            mid=(low + up)/2;
            if( target > nums[mid] ) low=mid+1;
            if( target < nums[mid] ) up=mid-1;
            if( target == nums[mid] ) return mid;
        }
        return -1;
    }
};

//Problem 2
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//find first and last position
 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int up = nums.size()-1;
        int mid;
        vector<int> ans;
                // int first = -1;
        // int last = -1;
        // vector<int> ans;
        // while( low <= up ){
        //     mid = (low + ( up - low )/2 );
        //     if( target == nums[mid] ){
        //         first = mid;
        //         up = mid - 1;//go left for better answer.
        //     }
        //     if( target > nums[mid] ){
        //         low = mid + 1;
        //     }
        //     if( target < nums[mid] ){
        //         up = mid - 1;
        //     }
        // }
        // ans.push_back(first);
        // low = 0;
        // up = nums.size()-1;
        // while( low <= up ){
        //     mid = (low + ( up - low )/2 );
        //     if( target == nums[mid] ){
        //         last = mid;
        //         low = mid + 1;//go right  for better answer.
        //     }
        //     if( target > nums[mid] ){
        //         low = mid + 1;
        //     }
        //     if( target < nums[mid] ){
        //         up = mid - 1;
        //     }
        // }
        // ans.push_back(last);
        // return ans;
        int flag = 0;
        while( low <= up ){
            mid = (low + ( up - low )/2 );
            if( target == nums[mid] ){
                flag = 1;
                break;
            }
            if( target > nums[mid] ){
                low = mid + 1;
            }
            if( target < nums[mid] ){
                up = mid - 1;
            }
        }
        if(flag == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int i=mid;
        while(i>=0 and nums[i]==nums[mid]){
            i--;
        } 
        i++;
        ans.push_back(i);
        int j=mid;
        while(j<nums.size() and nums[j]==nums[mid]){
            j++;
        }
        j--;
        ans.push_back(j);
        return ans;
    }
};

//Problem 4
// https://leetcode.com/problems/koko-eating-bananas/
//bananas eating type question 
