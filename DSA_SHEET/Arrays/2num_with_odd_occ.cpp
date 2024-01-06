//Find the two numbers with odd occurrences in an unsorted array
vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    vector<int>ans;
    int res=0,ros=0;
    for(int i=0;i<arr.size();i++){
        res^=arr[i];
    }
    ros=res & ~(res-1);
    int x=0,y=0;
    for(int i=0;i<arr.size();i++){
        if((arr[i] & ros)>0)
          x^=arr[i];
        else
         y^=arr[i];
    }
    ans.push_back(max(x, y));  
    ans.push_back(min(x, y));
    return ans;
}
