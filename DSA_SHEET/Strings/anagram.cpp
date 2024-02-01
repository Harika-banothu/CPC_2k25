
 bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length()!=b.length())
            return false;
        unordered_map<char,int>m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            if(m.find(b[i])!=m.end())
                m[b[i]]-=1;
            else
               return false;
        }
        for(auto it:m){
            if(it.second!=0)
                return false;
        }
        return true;
        
    }
