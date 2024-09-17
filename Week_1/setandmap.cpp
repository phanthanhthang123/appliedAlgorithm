#include<bits/stdc++.h>
using namespace std;

void bt1(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		set<int>s;
		for(int x: arr) s.insert(x);
		cout<<s.size()<<endl;
	}
}

void bt2(){
	int t;
	cout<<"Nhap so luong test case: ";
	cin>>t;
	cout<<"Nhap so luong phan tu cua mang: ";
	int n;cin>>n;
	int arr[n];
	cout<<"Nhap A[n]: ";
	for(int &x : arr) cin>>x;
	map<int,int>mp;
	for(int x: arr) mp.insert(make_pair(x,1));
	
	while(t--){	
		int check;
		cout<<"Kiem tra phan tu trong mang: ";
		cin>>check;
		if(mp.find(check)!=mp.end()){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	}
}
void bt3(){
	int t,l1,l2;
	cout<<"So luong test case: ";
	cin>>t;
	while(t--){
		cout<<"Nhap length arr1 arr2: ";
		cin>>l1>>l2;
		int arr1[l1],arr2[l2];
		for(int &x: arr1) cin>>x;
		for(int &x: arr2) cin>>x;
		set<int>s;
		map<int,int>mp;
		for(int x: arr2) s.insert(x);
		for(int x: arr1){
			if(s.find(x) ==s.end()){
				mp[x]++;
			}
		}
		if(mp.size()!=0){
			for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++){
				cout<<(*it).first<<" ";
			}
		}else{
			cout<<"NOT FOUND!";
		}
		cout<<endl;
	}
}
void bt4(){
	map<int,int>mp;
	int t;
	cout<<"Nhap so luong test case: ";
	cin>>t;
	while(t--){
		int n;
		cout<<"Nhap n: ";
		cin>>n;
		int arr[n];
		for(int &x : arr) cin>>x;
		for(int x: arr) mp[x]++;
		int res=0,cnt=0;
		for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++){
			if((*it).second > cnt){
				res = (*it).first;
				cnt = (*it).second;
			}
		}
		cout<<res<<" "<<cnt<<endl;
	}
}
void bt5(){
	int t;
	cout<<"Nhap so test case: ";
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cout<<"Nhap chuoi: ";
		getline(cin,s);
		map<char,int>mp;
		for(int i=0;i<s.length();i++){
			if(s[i] != '\0' && s[i] !=' ') mp[s[i]]++;
		}
		char res = ' ';
		int cnt = 0;
		for(pair<char,int> p : mp){
			if(p.second > cnt){
				cnt = p.second;
				res = p.first;
			}
		}
		if(res!=' ') cout<<res<<endl;
	}
}


int main(){
//	bt1();
//	bt2();
//	bt3();
//	bt4();
//	bt5();
	return 0;
}
