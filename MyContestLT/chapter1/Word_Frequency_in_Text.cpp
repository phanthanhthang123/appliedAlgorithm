#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,temp;
	map<string,int> mp;
	
	while(true){
		getline(cin,s);
		stringstream ss(s);
		while(ss >> temp){
			mp[temp]++;
		}
		if(s =="\0") break;
	}
	for(map<string,int>::iterator it = mp.begin();it!=mp.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
} 
