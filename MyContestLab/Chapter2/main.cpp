#include<bits/stdc++.h>
using namespace std;

int arr[1005];
int n,k;
bool visited[1005];

void print(int arr[],int n){
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void Try(int k){
	for(int v=1 ; v<=n;v++){
		if(!visited[v]){
			arr[k] = v;
			visited[v] = true;
			
			if(k==n){
				print(arr,n);
			}else{
				Try(k+1);
			}
			
			visited[v]= false;
		}	
	}
}
int Ckn(int k,int n) {
	if(k==0) return 1;
	if(k==n) return 1;
	return Ckn(k,n-1) + Ckn(k-1,n-1);;
	
}

int main(){
//	cin>>n;
//	memset(arr,false, sizeof(arr));
//	Try(1);
	cin >> k >> n;
	cout<<Ckn(k,n);
	
	return 0;
}
