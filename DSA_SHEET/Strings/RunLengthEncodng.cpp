//Run length encoding
string encode(string src)
{     
  //Your code here 
   int length = src.length();
   int count=0;
   int i=0;
   string ans="";
   while(i<length){
      char a=src[i];
      ans+=a;
      while(src[i]==a){
          count++;
          i++;
      }
      ans+=to_string(count);
      count=0;     
  }
  return ans;
}     
 
