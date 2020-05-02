// kele
#include <iostream>
#include <queue>
using namespace std;


void print(priority_queue <int> h,int k){
	while(!h.empty() && k>0){
		cout<<h.top()<<" ";
		h.pop();
		k--;
	}
}

int main()
{
	priority_queue <int> h;
	int k=3;
	while(true){
		int data;
		cin>>data;
		if(data==1){
			int x;
			cin>>x;
			h.push(x);
		}
		else{
			print(h,k);
		}
	}
	
	return 0;
}