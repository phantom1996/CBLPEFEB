// stlheap
#include <iostream>
#include <queue>
using namespace std;
void print(priority_queue<int, vector<int>, greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
}
int main()
{
	//priority_queue<int> q; max heap

	//sort(a,a+n,compare)

	priority_queue<int, vector<int>, greater<int> > q; //min heap

	q.push(1);
	q.push(6);
	q.push(4);
	q.push(2);
	q.push(3);
	q.push(5);
	print(q);
	
	return 0;
}