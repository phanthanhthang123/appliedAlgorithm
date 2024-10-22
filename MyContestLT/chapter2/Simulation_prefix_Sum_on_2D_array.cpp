#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int prefix[1005][1005];
int n,m;

void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}

void prifex2D(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j]; 
		}
	}
	
//	for(int i=0;i<=n;i++){
//		for(int j = 0;j<=m;j++){
//			cout<<prefix[i][j] <<" ";
//		}
//		cout<<endl;
//	}	
}

void start(){
	int q; 
	cin>>q;
	while(q--){
		int r1,r2,c1,c2;
		cin>>r1>>r2>>c1>>c2;
		int res = prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1];
		cout<<res<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	init();
	prifex2D();
	start();
	return 0;
}
