// heap
#include <iostream>
#include <vector>
using namespace std;

class MinHeap{

public:
	vector<int> v;
	MinHeap(){
		v.push_back(-1);
	}

	void heapify(int index){
		int parent=index;
		int leftchild=2*parent;
		int rightchild=2*parent + 1;

		//comparision
		 //1.left child
		if(leftchild<v.size() && v[parent]>v[leftchild]){
			parent=leftchild;
		}
		//right child
		if(rightchild<v.size() && v[parent]>v[rightchild]){
			parent=rightchild;
		}


		if(index!=parent){
			swap(v[parent],v[index]);
			heapify(parent);
		}


	}

	void push(int data){
		//last me add mei krna
		v.push_back(data);
		//property voilate
		//regain
		int index=v.size()-1;
		int parent_index=index/2;
		while(index>1 && v[parent_index]>v[index]){
			swap(v[parent_index],v[index]);
			index=parent_index; //new index will be old parent
			parent_index=index/2;
		}
	}
	void pop(){
		int last_index=v.size()-1;
		swap(v[1],v[last_index]);
		v.pop_back();
		heapify(1);//to be cotinued
	}
	bool is_empty(){
		return v.size()==1;
	}
	int topMinelement(){
		return v[1];
	}
	int size(){
		return v.size()-1;
	}


};


void print(MinHeap h){
	while(!h.is_empty()){
		cout<<h.topMinelement()<<" ";
		h.pop();
	}
}


int main()
{
	MinHeap h;
	h.push(4);
	h.push(2);
	h.push(5);
	h.push(1);
	h.push(6);
	h.push(3);

	print(h);
	return 0;
}