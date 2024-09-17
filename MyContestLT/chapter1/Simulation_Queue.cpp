#include<bits/stdc++.h>
using namespace std;

int main(){
	queue <int> q;
	string str;
	int temp;
	while(true){
		cin>>str;
		if(!str.compare("PUSH")){
			cin>>temp;
			cin.ignore();
			q.push(temp);
		}
		if(!str.compare("POP")){
			if(!q.empty()){
				cout<<q.front()<<endl;
				q.pop();	
			}else{
				cout<<"NULL"<<endl;
			}
		}
		if(!str.compare("#")) break;
	}
	
	return 0;
}
