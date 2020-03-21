// fiborec
#include <iostream>
using namespace std;

int Fibo(int n){

	//base case
	if(n==0 || n==1){
		return n;    // 0 , 1 n==0 val 0  n==1 val 1
	}


	//recursive case
	int ans1=Fibo(n-1);//assum
	int ans2=Fibo(n-2);//assum

	//ans

	int finalans=ans1+ans2;
	return finalans;



}





int main()
{

	int n;
	cin>>n;

	int ans=Fibo(n);
	cout<<ans;



	
	return 0;
}