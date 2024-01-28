//Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element
int maximumDifference(vector<int>& nums) {
        int maxdiff=nums[1]-nums[0];
        int min_ele=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-min_ele>maxdiff)
               maxdiff=nums[i]-min_ele;
            if(nums[i]<min_ele) min_ele=nums[i];
        }
        if(maxdiff<=0)
             return -1;
        return maxdiff;
    }
