// squareroots
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sqt=1;
	while(sqt*sqt<=n){
		sqt=sqt+1;
	}
	cout<<sqt-1;


	
	return 0;
}