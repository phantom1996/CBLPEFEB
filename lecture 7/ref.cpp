// ref
#include <iostream>
using namespace std;

//option 6 6
	//	 7 7
	//   6 7
//		5 6
//      5 7
//		6 7
int main()
{
	// int x=5;
	// int &y=x;
	// x++;
	// y++;
	// cout<<x<<" "<<y;
	
	int x=5;
	int &y=x;
	int &z=y;
	x++;
	y++;
	z++;
	cout<<x<<" "<<y<<" "<<z;
	
	return 0;
}