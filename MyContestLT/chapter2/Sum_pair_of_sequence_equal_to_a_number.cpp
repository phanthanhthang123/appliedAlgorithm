#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	int arr[n];
	for(int &x : arr) cin>>x;
	sort(arr,arr+n);
	int cnt = 0,i = 0,j=n-1;
	while(i<j){
		if(arr[i] + arr[j] ==m){
			cnt++;
			i++;
		}
		else if(arr[i] + arr[j] < m){
			i++;
		}
		else if(arr[i] + arr[j] > m){
			j--;
		}
	}
	cout<<cnt;
	return 0;
}
