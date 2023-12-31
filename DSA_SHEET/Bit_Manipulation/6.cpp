//Compute the absolute value (abs) without branching
unsigned int abs(int n) 
{ 
 int mas=n>>31;
  return ((n+mask)^mask);
} 
