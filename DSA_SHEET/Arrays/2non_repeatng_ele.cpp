//Find the two non-repeating elements in an array of repeating elements
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        long long res=0,ros=0;
        for(int i=0;i<nums.size();i++){
            res^=nums[i];
        }
         ros=res & ~(res-1);
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i] & ros)>0)
               x^=nums[i];
            else
              y^=nums[i];
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};
