// reverse stack
#include <iostream>
#include <stack>
using namespace std;


void pushintomystack(stack<int> &s,int x){
	if(s.empty()==true){
		s.push(x);
		return;
	}

	int y=s.top();
	s.pop();
	pushintomystack(s,x);

	s.push(y);
	return;
}

void reversemystack(stack<int> &s){
	if(s.empty()==true){
		return;
	}
	int x=s.top();
	s.pop();
	reversemystack(s);

	//insert
	pushintomystack(s,x);
	return;
}

int main()
{

	stack<int> s;
	for (int i = 1; i <=3 ; ++i)
	{
		s.push(i);
	}

	reversemystack(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}



}



	return 0;
}	