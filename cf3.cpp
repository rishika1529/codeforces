#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string helper(string s){
	if(s.size()<=10)return s;
	string ans="";
	ans+=s[0];
	ans+=to_string(s.size()-2);
	ans+=s[s.size()-1];
//	int ss=s.size();
//	char last=s[ss];
//	ss-=2;
//	ans+=to_string(ss-1);
//	ans+=last;
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<string>blah;
	for(int i=0;i<n;i++){
			string s;
			cin>>s;
	blah.push_back(helper(s));
	}
	for(string sh:blah)cout<<sh<<endl;
return 0;
	
}
