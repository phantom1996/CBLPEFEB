// mymap

#include <iostream>
#include <string>

using namespace std;



//what my node look like a key value pair
class node{

public:
	string key;
	int value;
	node* next;

	node(string k,int val){
		key=k;
		value=val;
		next=NULL;
	}

	~node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"Deleting "<<key<<" "<<value<<endl;
	}
};



class hashmap{

	node** table;
	int current_size;
	int table_size;

	int hashfunc(string key){
		int idx=0;
		int p=1;

		for(int i=0;i<key.length();i++){
			idx=idx+(key[i]*p)%table_size;
			idx=idx%table_size;
			p=(p*27)%table_size;
		}
		return idx;
	}
	void Rehash(){
		//continue
		//storage of old table
		node** oldtable=table;
		int oldtablesize=table_size;

		//creatinng ew big size table tablesize=2*tablesize
		table_size=2*table_size;
		table=new node*[table_size];
		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}

		current_size=0;//beacuse new table currently has no elemet
		
		//copy
		for(int i=0;i<oldtablesize;i++){
			node* temp=oldtable[i];
			while(temp!=NULL){
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			if(oldtable[i]!=NULL){
				delete oldtable[i];
			}
		}


		delete []oldtable;





	}

public:
	hashmap(int ts=7){
		table_size=ts;
		current_size=0;
		table=new node*[table_size];

		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}

	}

	void insert(string key,int val){
		int idx=hashfunc(key);
		node* n=new node(key,val);

		//insertion at  head

		n->next=table[idx];
		table[idx]=n;
		current_size++;

		float lf=current_size/(1.0*table_size);
		if(lf>=0.7){
			Rehash();
		}
	}	

	int search(string key){
		int idx=hashfunc(key);
		node* temp=table[idx];
		while(temp!=NULL){
			if(temp->key==key){
				return temp->value;
			}
			temp=temp->next;
		}
		return -1;
	}

	int mycurrentsize(){
		return current_size;
	}
	bool is_empty(){
		return current_size==0;
	}


	void print(){
		for(int i=0;i<table_size;i++){
			cout<<"Bucket "<<i<<" -> ";
			node* temp=table[i];
			while(temp!=NULL){
				cout<<"( "<<temp->key<<" , "<<temp->value<<" ) -->";
				temp=temp->next;
			}
			cout<<endl;
		}
	}
	
	int operator [](string key){
		int val= search(key);
		return val;
	}


};













