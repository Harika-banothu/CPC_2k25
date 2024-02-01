//Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
string removeChars(string string1, string string2) {
        // code here
        for(auto i:string2){
            while(find(string1.begin(),string1.end(),i)!=string1.end()){
                auto x=find(string1.begin(),string1.end(),i);
                string1.erase(x);
            }
        }
        return string1;
    }
