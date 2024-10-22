#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int &x : a) cin>>x;
	for(int &y : b) cin>>y;
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,res=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			int temp=i;
			int dem1=0,dem2=0;
			while(a[i]==b[j]){
				++dem1;++i;
			}
			while(b[j] == a[temp]){
				++dem2;j++;
			}
			res += dem1*dem2;
		}
		else if(a[i] < b[j]){
			i++;
			continue;
		}
		else if(a[i] > b[j]){
			j++;
			continue;
		}
	}
	
	cout<<res<<endl;
	
	return 0;
}
