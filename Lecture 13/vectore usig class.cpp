// vectore usig class
#include <iostream>
using namespace std;

class vector{

public:

	int *arr;
	int size;
	int capacity;
//default
	vector(){
		size=0;
		capacity=2;
		arr=new int[capacity];	
	}

//parameterized
	vector(int mysize){
		size=0;
		capacity=mysize;
		arr=new int[capacity];
	}



	void push_back(int x){
		if(size==capacity){
			capacity=capacity*2;
			int *oldptr=arr;
			arr=new int[capacity];
			for(int i=0;i<size;i++){
				arr[i]=oldptr[i];
			}
			delete []oldptr;
		}
		arr[size]=x;
		size++;
	}
	void pop_back(){
		size--;
	}
	int current_size(){
		return size;
	}
	int current_capacity(){
		return capacity;
	}
	bool is_empty(){
		if(size==0){
			return true;
		}
		else{
			return false;
		}
	}

};


int main()
{
	vector v;
	for(int i=1;i<=10;i++){
		v.push_back(i);
		cout<<v.current_size()<<"  "<<v.current_capacity()<<endl;
	}






	
	return 0;
}