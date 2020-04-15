// ll
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



class Linklist{

public:

	node* head;
	node* tail;

	Linklist(){
		head=NULL;
		tail=NULL;
	}



	void Insertion_at_front(int x){
		//creating a new node
		node *n=new node(x);

		//insertion

		if(head==NULL){
			//intially no node
			head=n;
			tail=head;
		}
		else{
			n->next=head;
			head=n;
		}


	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
	}

	int length(){
		int len=0;
		node* temp=head;
		while(temp!=NULL){
			len++;
			temp=temp->next;
		}
		return len;
	}
	bool iselementexist(int key){
		node* temp=head;
		while(temp!=NULL){
			if(temp->data==key){
				return true;
			}
			temp=temp->next;
		}
		return false;		
	}


	void Insertion_at_Tail(int x){

		node* n=new node(x);

		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}


	}

	void Insertion_at_position(int x,int pos){
		if(pos==0){
			Insertion_at_front(x);
		}
		else if(pos>length()){
			Insertion_at_Tail(x);
		}
		else{
			node* temp=head;
			int moveno=1;
			while(moveno<pos-1){
				moveno++;
				temp=temp->next;
			}

			node* n=new node(x);
			node* aagekinodes=temp->next;
			temp->next=n;
			n->next=aagekinodes;


		}
	}


	void Deletion_at_front(){
		if(head!=NULL){
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	void Deletion_at_tail(){
		node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}


	void Deletion_at_position(int pos){
		//homework
	}

	node* findMid(){
		node* fastptr=head->next;
		node* slowptr=head;

		while(fastptr!=NULL && fastptr->next!=NULL){
			fastptr=fastptr->next->next;
			slowptr=slowptr->next;
		}

		return slowptr;
	}




};



void printmyll(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}

node* mergeLL(node* a,node* b){
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node* c;

	if(a->data<b->data){
		c=a;
		//recursive
		c->next=mergeLL(a->next,b);
	}
	else{
		c=b;
		c->next=mergeLL(a,b->next);
	}

	return c;

}
	node* findMid2(node* head){
		node* fastptr=head->next;
		node* slowptr=head;

		while(fastptr!=NULL && fastptr->next!=NULL){
			fastptr=fastptr->next->next;
			slowptr=slowptr->next;
		}

		return slowptr;
	}
