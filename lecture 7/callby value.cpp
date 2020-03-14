// callby value
#include <iostream>
using namespace std;

// void swapingvalues(int x,int y){
// 	swap(x,y);
// 	cout<<x<<" "<<y<<endl;
// }
//option 6 5 and 5 6
//        6 5 and 5 6



//call by refernce
void swapingvalues(int &x,int &y){
	swap(x,y);
	cout<<x<<" "<<y<<endl;
}
// 6 5  6 5
// 6 5  5 6
int main()
{
	int x=5;
	int y=6;
//	cout<<x<<" "<<y<<endl;
	swapingvalues(x,y);
	cout<<x<<" "<<y<<endl;
	
	return 0;
}