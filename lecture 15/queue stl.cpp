// queue stl
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
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