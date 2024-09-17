#include<bits/stdc++.h>
using namespace std;

// multiset<dataType> name_multiset;
//-> cho phep co nhieu phan tu bang nhau
//find()-> tra ve iterator dau tien co value dang tim, nguoc lai tra ve iterator end();
//count() -> tra ve 0 hoac 1 hoac !=1
//erase() -> value: xoa het value
//		  -> iterator : xoa 1 phan tu

void MaxSliWindow(int a[],int n,int k){
	multiset<int> ms;
	for(int i=0;i<k;i++){
		ms.insert(a[i]);
	}
	cout<<*ms.rbegin()<<" ";
	ms.erase(ms.begin());
	
	for(int i = k;i<n;i++){
		ms.insert(a[i]);
		cout<<*ms.rbegin()<<" ";
		ms.erase(ms.begin());	
	}
}

int main(){
	int n,k;
	cout<<"Xin moi nhap n: ";
	cin>>n;
	cout<<"Xin moi nhap day con k phan tu: ";
	cin>>k;
	
	int arr[n];
	cout<<"Xin moi nhap cac phan tu cua A[n]: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	MaxSliWindow(arr,n,k);
	
	
	return 0;
}
