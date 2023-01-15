// task- https://leetcode.com/problems/first-bad-version/description/?fbclid=IwAR2Dv3yo26-M1CisUfaowmDLHE27qnywritweuWzxBSeBDsNr0QQc8y6_b4
//leet code(first bad version)

// while(isBadVersion(n))
//             n--;

//         return n+1;

//---------------------------------------------------

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int ans=n;
        int high=n;
        int  mid;
        while(low <= high){
            mid = (low +(high-low)/2);
            if( isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;

    }
};