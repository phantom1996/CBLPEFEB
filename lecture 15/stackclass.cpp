// stackclass
#include <iostream>
using namespace std;

template<typename T>
class node{

public:
	T data;
	node<T>* next;

	node(T x){
		data=x;
		next=NULL;
	}
};

template<typename T>

class stack{

public:
	node<T>* head;
	int cnt;

	stack(){
		head=NULL;
		cnt=0;
	}

	void push(T x){
		cnt++;
		node<T>* n=new node<T>(x);
		//inserion at head;
		if(head==NULL){
			head=n;
		}
		else{
			n->next=head;
			head=n;
		}

	}
	void pop(){
		if(cnt>0){
			cnt--;
			//deletion at front
			node<T>* temp=head;
			head=head->next;
			delete temp;
		}
	}
	int size(){
		return cnt;
	}
	bool empty(){
		return head==NULL;
	}

	T top(){
		if(head!=NULL)
			return head->data;
	}

};

int main()
{
	stack <int>s;
for(int i=1;i<=5;i++){
		s.push(i);
	}
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;

	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}


	cout<<endl;
	stack<char> s1;
	s1.push('A');
	s1.push('C');
	s1.push('D');


while(!s1.empty()){

	cout<<s1.top()<<endl;
	s1.pop();
}	
	return 0;
}