//Position of the right most set bit
#include <bits/stdc++.h> 
int getRightMostSetBit(int n)
{
    // Write your code here
    int p = 1;
    while (n > 0) {
 
        if (n & 1) {
            return p;
        }
        p++;
        n = n >> 1;
    }
    return -1;
}
