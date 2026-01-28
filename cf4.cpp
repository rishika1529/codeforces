#include<iostream>
using namespace std;
bool helper(int k,int el,vector<int>arr){
	int sum=0;
	for(int i:arr)sum+=i;
	if(sum==k)return true;
	while(sum<k)sum+=el;
	if(sum==k)return true;
	return false;
}
int main(){
	int testcases;
	cin>>testcases;
	vector<string>ans;
	while(testcases>0){
		int n;
		int k;
		int el;
		cin>>n>>k>>el;
		vector<int>arr(n);
	bool blehh=helper(k,el,arr);
	if(blehh)ans.push_back("YES");
	else ans.push_back("NO");
	}
	for(string sh:ans)cout<<ch;
	return 0;
	
}
