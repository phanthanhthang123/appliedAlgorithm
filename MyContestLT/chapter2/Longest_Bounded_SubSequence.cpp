#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,Q;
	cin>>n>>Q;
	int a[n];
	for(int &x : a) cin>>x;
	int res = -1;
	int sum = 0;
	for(int i=1;i<n;i++){
		int cnt = 0;
		for(int j=i;j<n;j++){
			sum +=a[j];
			if(sum <= Q){
				cnt++;
			}else{
				res = max(res,cnt);
				sum=sum-a[i];
				cnt--;
				break;
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
