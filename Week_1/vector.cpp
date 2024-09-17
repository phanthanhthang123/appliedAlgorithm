#include<bits/stdc++.h>
using namespace std;

//vector <dataType> name_Vector;    -> 1 mang dong

//Method
//push_back() -> day ve sau O(1)
			//-> tu tang size len 1
//pop_back() ->xoa phan tu sau cung O(1)
			//-> giam size 1 don vi 
//size()	->tra ve kich thuoc cua vector
//back()	-> tra ve value cua gia tri cuoi cung cua vector
//front()	->tra ve value dau tien cua vector
//erase() -> xoa 1 phan tu trong vector voi tham so la 1 iterator O(N)
//insert() -> them 1 phan tu o vi tri bat ki (iterator,value)	O(N)
//clear() -> xoa vector
//swap()  -> hoan doi 2 value cua vector v1.swap(v2)

//Duyet qua index,forEach
//Duyet qua iterator: hoat dong giong con tro tro den 1 phan tu nao do trong vector:
//					 -> begin(): vi tri dau tien
//					 -> end(): vi tri sau phan tu cuoi cung
//					 ->rbegin():vi tri cuoi cung 

// :: -> toan tu pham vi
// *  -> toan tu giai pham chieu
// &   -> tham chieu
void Remove(vector<int> &v,int value){
//	int temp = -1;
//	for(int i=0;i<v.size();i++){
//		if(v[i]==value){
//			temp=i;
//			break;
//		}
//	}
//	if(temp!=-1){
//		for(int i=temp;i<v.size();i++){
//			v[i]=v[i+1];
//		}
//		v.pop_back();
//		Remove(v,value);
//	}

	for(vector<int>::iterator it = v.begin();it<v.end();it++){
		if(*it==value){
			v.erase(it);
		}
	}
}

int main(){
//	vector <int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	cout<<v.size()<<endl;
//	cout<<"Phan tu dau tien cua vector: "<<v[0]<<endl;
//	cout<<"Phan tu cuoi cung cua vector: "<<v[v.size()-1]<<endl;
//	cout<<"Phan tu cuoi cung cua vector: "<<v.back()<<endl;
//	
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
//	for(int x : v){
//		cout<<x<<" ";
//	}
//	cout<<endl;
//	
//	for(vector<int>::iterator it = v.begin();it!=v.end();++it){
//		cout<<*it<<" ";
//	}
//	cout<<endl;
//	
//	
//	int n;
//	cout<<"Nhap n: ";
//	cin>>n;
//	vector<int> V(n);// Khai bao vector V co n phan tu  ,<=> V[n]
//	for(int i=0;i<n;i++){
//		cin>>V[i];
//	}
//	for(int x: V){
//		cout<<x<<" ";
//	}
//	cout<<"Befor Size: "<<V.size()<<endl;
//	V.push_back(6);
//	cout<<"After Size: "<<V.size()<<endl;
//	cout<<endl;
//	
//	
//	vector<int> V1(n,100);
//	for(int x:V1){
//		cout<<x<<" ";
//	}
//	cout<<endl;
//	cout<<"Befor Size: "<<V1.size()<<endl;
//	V1.push_back(100);
//	cout<<"After Size: "<<V1.size()<<endl;
	int n;
	cout<<"Xin moi nhap mang co so phan tu : ";
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int temp;cin>>temp;
		v.push_back(temp);
	}
	cout<<"Phan tu ban muon xoa la: ";
	int remove;
	cin>>remove;
	Remove(v,remove);
	cout<<"Mang sau khi xoa phan tu nay la: ";
	for(int x: v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	return 0;
		
}
