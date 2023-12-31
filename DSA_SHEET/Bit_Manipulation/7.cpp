//Turn off the rightmost set bit
int fun(unsigned int n) 
{ 
    return n & (n - 1); 
} 
