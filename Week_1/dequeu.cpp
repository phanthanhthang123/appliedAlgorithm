#include<bits/stdc++.h>
using namespace std;

//deque<dataType> name_deque; -> double end queue 
//push_back(): chen sau
//push_front(): chen truoc
//pop_front() : xoa truoc
//pop_back(): xoa sau
//front(): lay ptu dau
//back() : lay ptu sau
//size():
//empty(): 


//9 3
//10 2 3 7 8 1 7 3 5 
//10 7 8 8 8 7 7 
void c1(int a[],int n,int k){
	for(int i=0;i<=n-k;i++){
		int tmp = INT_MIN;
		for(int j=0;j<k;j++){
			tmp= max(tmp,a[i+j]);
		}
		cout<<tmp<<" ";
	}
}
void c2(int a[],int n,int k){
	multiset<int>ms;
	for(int i=0;i<k;i++){
		ms.insert(a[i]);
	}
	for(int i = k;i<n;i++){
		cout<<*ms.rbegin()<<" ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout<<*ms.rbegin()<<" ";
}
int main(){
//	deque<int> dq;
//	for(int i=0;i<=10;i++){
//		dq.push_back(i);
//	}
//	for(auto i = dq.begin();i!=dq.end();i++){
//		cout<<*i<<" ";
//		dq.pop_front();
//	}

	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
//	c1(a,n,k);
	c2(a,n,k);

	
	return 0;
}
