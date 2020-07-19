// factorial
#include <iostream>
using namespace std;

int factorial(int n){

	// ase case

	if(n==0){
		return 1;
	}

	//recursive case

	int chotekaansleaa = factorial(n-1); //assumption


	//as

	int myans = n * chotekaansleaa;

	return myans; 


}




int main()
{
	int n;
	cin>> n;

	cout<<factorial(n);
	
	return 0;
}