#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	int n;
	cin>>n;	
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		s.insert(temp);
	}
	cin.ignore();
	string control;
	int value;
	while(true){
		cin>>control;
		if(!control.compare("insert")){
			cin>>value;
			cin.ignore();
			s.insert(value);
		}
		if(!control.compare("remove")){
			cin>>value;
			cin.ignore();
			if(s.find(value) != s.end()){
				s.erase(s.find(value));
			}
		}
		if(!control.compare("min_greater_equal")){
			cin>>value;
			cin.ignore();
			set<int>::iterator it = s.lower_bound(value);
			if(it!=s.end()){
				cout<<*it<<endl;
			}else{
				cout<<"NULL"<<endl;
			}
		}
		if(!control.compare("min_greater")){
			cin>>value;
			cin.ignore();
			set<int>::iterator it = s.upper_bound(value);
			if(it != s.end()){
				cout<<*it<<endl;
			}else{
				cout<<"NULL"<<endl;
			}
		}
		if(!control.compare("#")){
			break;
		}
	}
	
	return 0;
}
