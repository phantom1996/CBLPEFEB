// stairs
#include <iostream>
using namespace std;

int n_stairs(int n){
	//base constion
	if(n==1){
		return 1;
	}
	if(n<=0){
		return 0; 
	}

	int op1=n_stairs(n-1);
	int op2=n_stairs(n-2);
	int op3=n_stairs(n-3);

	return op1+op2+op3;



}






int main()
{
	int n;
	cin>>n;

	int ans=n_stairs(n);
	cout<<ans;
	
	return 0;
}