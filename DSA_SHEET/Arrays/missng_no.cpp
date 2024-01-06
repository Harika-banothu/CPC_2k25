//Find missing number from array of N-1 numbers in the range 1 to N
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res=n;
        for(int i=0;i<n;i++){
            res^=i;
            res^=nums[i];
        }
        return res;
    }
};
