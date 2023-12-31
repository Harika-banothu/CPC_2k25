//Swap every consecutive odd and even positioned bit in a number 
unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	unsigned int even = n & 0xAAAAAAAA;
    	unsigned int odd = n & 0x55555555;
    	even >>= 1;
    	odd <<= 1;
    	return (even | odd);
    }
