//C++ 
#include <bits/stdc++.h> 
using namespace std;

int main() 
{ 
    stack<int>s;
    string str;
    while(true){
//        getline(cin,str);
		cin>>str; 
        if(!str.compare("PUSH")){
            int temp;
            cin>>temp;
            s.push(temp);
            cin.ignore();
        }
        else if(!str.compare("POP")){
            if(!s.empty()){
                int temp = s.top();
                cout<<temp<<endl;
                s.pop();
            }else{
                cout<<"NULL"<<endl;
            }
        }
        else if(!str.compare("#")){
            break;
        }
        
        else if(!str.compare("in")){
        	while(!s.empty()){
        		cout<<s.top()<<" ";
        		s.pop();
			}
		}
    }
    
    return 0;
}

