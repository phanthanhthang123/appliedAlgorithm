#include<bits/stdc++.h>
using namespace std;

//pair -> luu cac cap so,1 so- 1 chuoi, 2 chuoi
//pair <dataType1,dataType2> p;

//p.first -> value1
//p.second -> value2

//make_pair(x,y) -> tao 1 pair (x,y)

int main(){
	pair<int,int> p;
	pair<long long,long long> p1;
	pair<string,int> p2;
	pair<string,string> p3;
	
	p = make_pair(100,200);
	cout<<p.first<<" "<<p.second<<endl;
	
	pair<pair<int,int>,int> P;
//	tuple<int,int,int> t{1,2,3};
//	cout<<get<1>(t)<<endl;
	P = {{1,2},3};
	
	P = make_pair(make_pair(100,200),300);
	cout<<P.first.second<<endl;
	
	return 0;
}
