//Count set bits in an integer
int countSetBits(int n) {
    // Write your code here
    int cnt=0;
    while(n!=0){
        if(n&1==1)
          cnt++;
        n=n>>1;
    }
    return cnt;
}
