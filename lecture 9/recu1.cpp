// recu1
#include <iostream>
using namespace std;


int fact(int n){

	//base case
	if(n==0){
		return 1;
	}


	// recursive case
	int chotiproblem=fact(n-1); //assumption


	//ans
	int ans= n*chotiproblem;
	return ans;

}



int main()
{
	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans;
	return 0;
}