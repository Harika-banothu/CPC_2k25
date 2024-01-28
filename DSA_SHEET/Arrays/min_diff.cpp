//Find two numbers such that their difference is minimum
int  minimum_difference(vector<int>nums){
   	    // Code here
   	    sort(nums.begin(),nums.end());
   	    int min_diff=nums[1]-nums[0];
   	    for(int i=1;i<nums.size()-1;i++){
   	        min_diff=min(min_diff,nums[i+1]-nums[i]);
   	    }
   	    return min_diff;
   	}    
