#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int &x: a) cin>>x;
	int sum=0,l=0,r;
	int res = 0;
	for(r=0;r<n;r++){
		sum+= a[r];
		while(sum > s){
			sum -=a[l];
			l++;
		}
		res = max(res,r-l+1);
	}
	
	cout<<res<<endl;
	
	return 0;
} 
