#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool helper(int k,int el,vector<int>&arr) {
	int sum=0;
	for(int i:arr)sum+=i;
	if(sum==k)return true;
	if(el<=0)return false;
	while(sum<k)sum+=el;
	if(sum==k)return true;
	return false;
}
int main() {
	int testcases;
	cin>>testcases;
	vector<string>ans;
	while(testcases>0) {
		int n;
		int k;
		int el;
		cin>>n>>k>>el;
		vector<int>arr(n,-1);
		for(int i=0; i<n; i++) {
			int num;
			cin>>num;
			arr[i]=num;
		}
		bool blehh=helper(k,el,arr);
		if(blehh)ans.push_back("YES");
		else ans.push_back("NO");
		testcases--;
	}
	for(string sh:ans)cout<<sh<<endl;
	return 0;

}
