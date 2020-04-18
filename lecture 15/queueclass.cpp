// queueclass
#include <iostream>
using namespace std;

class node{

public:
	int data;
	node* next;

	node(int x){
		data=x;
		next=NULL;
	}
};

class queue{

public:
	node* head;
	int cnt;

	queue(){
		head=NULL;
		cnt=0;
	}
	void push(int x){
		cnt++;
		node* n=new node(x);
		if(head==NULL){
			head=n;
		}
		else{
			node* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=n;
		}
	}
	void pop(){
		if(cnt>0){
			cnt--;
			node* temp=head;
			head=head->next;
			delete temp;
		}

	}
	int front(){
		//queue should not be empty
		if(head!=NULL)
			return head->data;
	}
	int size(){
		return cnt;
	}
	bool empty(){
		return head==NULL;
	}
};



int main()
{	queue q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}

	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	q.pop();
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	return 0;
}