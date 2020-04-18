// queue sig stack
#include <iostream>
#include <stack>
using namespace std;

class queue
{
public:
	stack<int> s1;
	stack<int> s2;

	void push(int x){
		s1.push(x);
	}	
	void pop(){
		//copy s1 to s2
		while(!s1.empty()){
			int x=s1.top();
			s2.push(x);
			s1.pop();
		}
		//remove top elemet from s2
		s2.pop();
		//copy s2 to s1
		while(!s2.empty()){
			int x=s2.top();
			s1.push(x);
			s2.pop();
		}
	}
	int front(){

		while(!s1.empty()){
			int x=s1.top();
			s2.push(x);
			s1.pop();
		}
		//remove top elemet from s2
		int myans=s2.top();
		//copy s2 to s1
		while(!s2.empty()){
			int x=s2.top();
			s1.push(x);
			s2.pop();
		}
		return myans;
	}
	bool empty(){
		if(s1.empty()==true){
			return true;
		}
		else{
			return false;
		}
	}
	int size(){
		return s1.size();
	}

	
};





int main()
{
	queue q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	cout<<boolalpha<<q.empty()<<endl;

	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	q.pop();
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	cout<<boolalpha<<q.empty()<<endl;
	
	return 0;
}