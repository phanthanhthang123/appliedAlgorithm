#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int n,Q;
int a[N],S[N];
//sort
// A[x] -> A[y] =>> sort(A+x,A+y+1);
//A[1] -> A[N] =>> sort(A+1,A+N+1)
void prefix1(){
	for(int i=1;i<=n;i++){
		if(i==1) S[i] = a[i];
		else{
			S[i] = S[i-1] + a[i];
		}
	}
}
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	prefix1();
	cin>>Q;
	for(int i=1;i<=Q;i++){
		int l,r;
		cin>>l>>r;
		if(l==1) cout<<S[r]<<endl;
		else cout<<S[r] - S[l-1]<<endl;
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();	
	return 0;
}
