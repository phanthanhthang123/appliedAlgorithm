#include<bits/stdc++.h>
using namespace std;

int upperBound(const set<int> &s,int k){
	set<int>::iterator it = s.upper_bound(k);
	return (it != s.end()) ? *(it) : -1;
}

int main(){
	set<int>s;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int temp;cin>>temp;
		s.insert(temp);
	}
	
	string str;
	int k;
	while(true){
		cin>>str;
		if(str=="next"){
			cin>>k;
			cout<<upperBound(s,k)<<endl;
		}
		if(str=="#"){
			break;
		}
	}
	return 0;
}
