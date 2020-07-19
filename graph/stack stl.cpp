// stack stl
#include <iostream>
#include <stack>
using namespace std;

int main()
{

	// int x;
	stack<int> s;  //sytax

	//operatio

	//isert
	for(int i=1;i<=5;i++){
		s.push(i);
	}
	cout<<s.top()<<endl; //seeig top element

	s.pop(); //remove from top

	cout<<s.top()<<endl;
	

while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	return 0;
}










sharadnailwal96@gmail.com

