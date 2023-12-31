//Perform nibble wise swap in a byte of data
class Solution{
public:
    int swapNibbles(int N){
        // code here
         int rt = (N & 0b00001111);
        rt = rt << 4;
        int lt = (N & 0b11110000);
        lt = lt >> 4;
        return (rt | lt);
    }
};
