#include<bits/stdc++.h>
using namespace std;

//Set 	-> top hop cac phan tu 
//		-> khong cho 2 phan tu giong nhau,dc sap xep tu be toi lon

//	set<dataType> name_Set;

//method
//insert() -> them 1 phan tu vao trong set
//size() -> tra ve so luong phan tu o trong set
//empty() ->kiem tra rong, neu rong -> true
//clear() -> xoa het cac phan tu trong set

//find() -> tra ve iterator cua ptu tim thay neu tim thay phan tu
//		 -> tra ve iterator end() neu ko tim thay

//count() -> tra ve so lan xuat hien cua phan tu trong set -> return 0 or n

//erase() -> xoa ptu, dau vao la iterator or 1 so

void bt1(float a[],int n) {
	set<float> s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	cout<<"Mang co "<<s.size()<<" phan tu khac nhau"<<endl;
}
void bt2(float a[],int n){
	set<float>s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	cout<<"Kiem tra x co thuoc mang hay khong"<<endl;
	int q;
	cout<<"So truy van: ";
	cin>>q;
	while(q--){
		int temp;
		cout<<"Kiem tra phan tu: ";
		cin>>temp;
		if(s.find(temp) !=s.end()){
			cout<<temp<<" xuat hien trong mang\n";
		}else{
			cout<<temp<<" khong xuat hien trong mang\n";
		}
	}
}
int main(){
	set<int> s;
	for(int i=1;i<=5;i++){
		s.insert(i);
	}
	for(auto x : s){
		cout<<x<<" ";
	}
	cout<<endl<<s.size()<<" "<<endl;
	s.insert(2);
	s.insert(8);
	cout<<s.size()<<endl;
	
	if(s.count(5) != 0){
		cout<<"5 Found\n";
	}else{
		cout<<"5 Not Found\n";
	}
	
	set<int>::iterator it = s.find(8);
	if(it!=s.end()){
		cout<<"8 Found\n";
	}else{
		cout<<"8 Not Found\n";
	}
	
	if(s.find(18) !=s.end()){
		s.erase(s.find(18));
	}
		
	cout<<*s.begin()<<" "<<*s.rbegin()<<endl;
	
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	bt1(arr,n);
	bt2(arr,n);
	return 0;
}
