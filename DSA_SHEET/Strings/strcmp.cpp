//Write strcmp function and returns -1 if s1 < s2, 0 if s1 = s2, else returns 1
int ic_strcmp(string s1, string s2) 
{ 
    int i; 
    for (i = 0; s1[i] && s2[i]; ++i) 
    { 
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
        continue; 
        else
        break; 
    }  
    if (s1[i] == s2[i]) 
        return 0; 
    if ((s1[i] | 32) < (s2[i] | 32)) 
        return -1; 
    return 1; 
} 
