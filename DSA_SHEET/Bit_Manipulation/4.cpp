//Count numer of set its to be flipped to convert A to B
int flipBits(int n) {
    // Write your code here
    int cnt=0;
    while(n!=0){
        if(n&1==1)
          cnt++;
        n=n>>1;
    }
    return cnt;
}
int FlippedCount(int a, int b)
{
    return countSetBits(a ^ b);
}
