// stack stl
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//create 
	stack<int> s;
	//isertion

	//s.push()

	for(int i=1;i<=5;i++){
		s.push(i);
	}
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;

	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	
	return 0;
}