//task 2 (15 JAN 2023)
//find square root with using pow and sqrt function
//https://leetcode.com/problems/sqrtx/?fbclid=IwAR1onW9Y3HDXqLrgptcWZS86_hNJoL975otbAlXus7DM7SJEsXp5C8_pO4s
class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high = x;
        long long int mid;
        long long int temp;
        int ans;
        while(low <= high){
            mid = low + (high - low)/2;
            temp = mid*mid;
            if(temp <= x){
                ans=mid;
                low = mid +1;
            } 
            if(temp > x){
                high = mid - 1;
            }
            
        }
        return ans;

    }
};