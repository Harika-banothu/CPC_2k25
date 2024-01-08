//Print the first unique character in a string
int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)
                return s[i];
        }
        
        return -1;
            
 }
