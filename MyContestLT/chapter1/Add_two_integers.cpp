#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long a;
	unsigned long long b;
	cin>>a>>b;
	int x = a%10;
	int y = b%10;
	vector<int>v;
	int res = 0;
	while(a!=0 && b!=0){
		if(x+y+res>=10){
			int temp = (x+y+res)%10;
			res = 1;
			v.push_back(temp);
		}else{
			int temp = (x+y+res)%10;
			res = 0;
			v.push_back(temp);
		}
		a = a/10;
		b = b/10;
		x = a%10;
		y = b%10;
	}
	while(a!=0){
		if(x+res >=10){
			int temp = (x+res)%10;
			res = 1;
			v.push_back(temp);	
		}else{
			int temp = (x+res)%10;
			res = 0;
			v.push_back(temp);
		}
		a = a/10;
		x= a%10;
	}
	while(b!=0){
		if(y+res >=10){
			int temp = (y+res)%10;
			res = 1;
			v.push_back(temp);	
		}else{
			int temp = (y+res)%10;
			res = 0;
			v.push_back(temp);
		}
		b = b/10;
		y= b%10;
	}
	if(res==1){
		v.push_back(1);
	}
	
	for(vector<int>::reverse_iterator it = v.rbegin();it!=v.rend();it++){
		cout<<*it;
	}
	
	return 0;
}
