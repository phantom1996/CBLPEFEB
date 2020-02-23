// scopeofvarible
#include <iostream>
using namespace std;
int y=50; //global 
int main()
{
	//local varibles
	// int y=10;
	int i=5;
	for(int i=1;i<=10;i++){
		cout<<::y<<" ";
		
	}
	cout<<i;
	// cout<<::y; //scope resolution opearator
	
	return 0;
}