#include<bits/stdc++.h>
using namespace std;

//stack -> LIFO : last in first out
//		->push(): day vao
//		->pop(): xoa
//		->top(): lay phan tu tren cung
//		->empty(): ktra rong

//	stack<dataType> name_stack;
int main(){
	int n;cin>>n;
	int a[n],b[n];
	for(int &x : a) cin>>x;
	stack<int>st;
	int res = INT_MIN;
	int i=0;
	while(i<n){
		if(st.empty() || a[i] >= a[st.top()]){
			st.push(i);
			++i;
		}
		else{
			int index = st.top();//chi so cua cot dinh stack
			st.pop();
			//tinh toan Shcn
			if(st.empty()){
				res=max(res,i* a[index]);
			}else{
				res = max(res,a[index]*(i-st.top()-1));
			}
		}
	}
	while(!st.empty()){
		int index = st.top();
		st.pop();
		
		if(st.empty()){
			res = max(res,i*a[index]);
		}
		else{
			res = max(res,a[index]*(i-st.top()-1));
		}
	}
	
	cout<<res<<endl;
	
	return 0;	
} 
