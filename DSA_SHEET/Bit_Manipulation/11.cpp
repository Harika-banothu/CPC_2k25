//Find the position of the only set bit

#include <bits/stdc++.h> 
int findSetBit(int N) {   
    // Write your code here
    if (N==0) return -1;
    int cnt=0;
    while(N)
    {
        if (N&1) break;
        cnt++;
        N=(N>>1);
    }
    return (N&(N-1))==0?cnt+1:-1;
}
