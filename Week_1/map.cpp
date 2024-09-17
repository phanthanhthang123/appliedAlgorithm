#include<bits/stdc++.h>
using namespace std;

//luu cac cap [key,value] -> cac key duy nhat =>> 2 key ko the bang nhau, value co the giong nhau
// map<dataTypeKey,dataTypeValue> name_map; -> luu cac cap pair
//											-> tang dan theo key

//insert() -> them cac cap (key,value) vao trong map
//map[key] = value <=> insert({key,value})
//empty() -> kiem tra rong, rong-> true
//size() -> tra ve kich thuoc map
//clear() -> xoa het ptu trong map

//find() -> tim kiem key , tra ve iterator or it end()
//count() -> tra ve so lan xuat hien cua key can tim kiem, =>> return 0 or 1
//erase() -> xoa 1 cap gia tri thong qua key, tham so la key or iterator
int main(){
//	map<int,int> mp;
//	mp[100] = 200; //{(100,200)}
//	mp[200] = 300; //{(100,200),(200,300)}
//	
//	mp.insert({300,400});
//	
//	cout<<mp.size()<<endl;
//	
//	mp[100]=300;	//-> thay the cap (100,200) = (100,300)
//	
//	cout<<mp.size()<<endl;
//	
//	for(pair<int,int> p : mp){
//		cout<<p.first<<" "<<p.second<<endl;
//	}
//	
//	for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++){
//		cout<<(*it).first<<" "<<(*it).second<<endl;
//	}

//	map<int,int> mp;
//	cout<<"Nhap n: ";
//	int n;cin>>n;
//	int a[1000];
//	cout<<"Nhap A[n]: ";
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		mp[a[i]]++;
//	}
//	
//	for(pair<int,int> x : mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
	
//	for(int i=0;i<n;i++){
//		if(mp[a[i]!=0]){
//			cout<<a[i]<<" "<<mp[a[i]]<<endl;
//			mp[a[i]]=0;
//		}
//	}

	map<string,int>mp;
	string s;
	int n;
	cout<<"Nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		mp[s]++;
	}
	map<string,int>::iterator max = mp.begin();
	for(map<string,int>::iterator it = mp.begin();it!=mp.end();it++){
		if((*it).second > (*max).second) max = it;  
	}
	cout<<"Chuoi xuat hien nhieu nhat la: "<<(*max).first<<" voi "<<(*max).second<<" lan xuat hien"<<endl;
	return 0;
} 
