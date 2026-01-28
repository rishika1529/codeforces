#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
vector<int>arr(n,-1);
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
	cin>>arr[i];
	if(i%2!=0)mp[arr[i]]++;
}	
sort(arr.begin(),arr.end());
if(mp.find(arr[0])!=mp.end()){

for(int i=0;i<n;i++){
	//we have alts
	if(i%2!=0 && mp.find(arr[i])==mp.end())cout<<"NO"; 
}
}
else{
for(int i=0;i<n;i++){
	//we have alts
	if(i%2==0 && mp.find(arr[i])==mp.end())cout<<"NO";
}	
}
return 0;
}
