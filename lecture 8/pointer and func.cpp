// pointer and func
#include <iostream>
using namespace std;

void swaping(int *x,int *y){
	swap(*x,*y);
	cout<<*x<<" "<<*y<<endl;
}


 // 5 6    6 5
//   6 5    6 5
int main()
{

	int x=5;
	int y=6;
	swaping(&x,&y);
	cout<<x<<" "<<y<<endl;
	
	return 0;
}