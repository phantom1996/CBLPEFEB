// liklist2
#include <iostream>
#include "ll.h"
using namespace std;



node* mergesort(node* head){

	//base
	if(head==NULL || head->next==NULL){
		return head;
	}

	node* mid=findMid2(head);

	node* a=head;
	node* b=mid->next;
	//break the bond 
	mid->next=NULL;

	//aage ka recursion 

	a=mergesort(a);
	b=mergesort(b);


	//merge
	node* newnode=mergeLL(a,b);
	return newnode;

}

//cuycle h
void * cycledetection(node* &head){
	node* fstptr=head->next;
	node* slwptr=head;

	while(fstptr!=slwptr){
		fstptr=fstptr->next->next;
		slwptr=slwptr->next;
	}

	slwptr=head;

	while(slwptr->next!=fstptr->next){
		slwptr=slwptr->next;
		fstptr=fstptr->next;
	}

	fstptr->next=NULL;

}




node* reversell(node* head){

	node* Mynext=head;
	node* curr=head;
	node* prev=NULL;


	while(Mynext!=NULL){
		//store
		Mynext=curr->next;
		//bond break
		curr->next=prev;

		//prev update
		prev=curr;

		curr=Mynext;
	}

	return prev;
}



int main()
{

	Linklist l;
	// for(int i=4;i>=1;i--){
	// 	l.Insertion_at_Tail(i);
	// }
	l.Insertion_at_Tail(1);
	l.Insertion_at_Tail(5);
	l.Insertion_at_Tail(3);
	l.Insertion_at_Tail(4);
	l.Insertion_at_Tail(2);
	l.print();
	cout<<endl;
	// node* ans=mergesort(l.head);
	// printmyll(ans);
	node* ans=reversell(l.head);
	printmyll(ans);
	return 0;
}