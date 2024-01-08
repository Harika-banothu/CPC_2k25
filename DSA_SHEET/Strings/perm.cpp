//Print all permutations of a string
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=S.length();
		    permuteString(S,0,n);
		     return v;
		    
		}
		void permuteString(string S,int i,int n){
		   
		   if (i >= n ) 
            return;
        for (int j = i; j < n; j++) {
            swap(S[i], S[j]);
            if(i == n-1)
              v.push_back(S);
            permuteString(S, i + 1, n);
        }
	}
	private:
	  vector<string>v;
};
