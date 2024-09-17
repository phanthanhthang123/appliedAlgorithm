#include<bits/stdc++.h>
using namespace std;

//queue<dataType> name_queue; FIFO: first in first out
//push() -> them ptu vao queue
//pop() -> xoa phan tu dau tien cua queue
//front() -> lay ra ptu dau tien cua queue
//back() -> tra ve ptu sau cung cua queue
//size() -> tra ve so luong ptu trong queue
//empty() -> ktra rong

int main(){
	queue<int> q;
	for(int i= 0;i<10;i++){
		q.push(i);
	}

	
	cout<<"First: "<<q.front()<<endl;
	cout<<"Las: "<<q.back()<<endl;
	
	return 0;
}
