//Rotate bits of an integer

int RotateByKBits(int num, int k) {
	if(k==0)return num;

	vector<int> arr;
while(num!=0){
	int a= num & 1;
	arr.push_back(a);
	num>>=1;
	
}
reverse(arr.begin() ,arr.end());
int n=arr.size();

if(k<0){
	k=abs(k)%n;
	reverse(arr.begin() , arr.begin()+(n-k));
	reverse(arr.begin()+(n-k) , arr.end());
	reverse(arr.begin() ,arr.end());
}else{
	k=abs(k)%n;
	reverse(arr.begin() , arr.begin()+k);
	reverse(arr.begin()+k , arr.end());
	reverse(arr.begin() ,arr.end());
}
int ans= 0;
int j =0 ;
for(int i = n-1; i>=0 ; i--){
	ans+=arr[i]*pow(2,j);
	j++;

}

return ans;


}
