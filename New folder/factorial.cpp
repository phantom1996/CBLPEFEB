// factorial
#include <iostream>
using namespace std;


int Multiply(int x,int a[],int size){

	int carry = 0;
	for(int i=0;i<size;i++){

		int prod = x * a[i] + carry;

		a[i]=prod%10;

		carry = prod/10; 
	}

	while(carry>0){
		a[size]=carry%10;

		carry=carry/10;

		size++;
	}

	return size;

}
void factorial(int n){

	int a[1000];
	int size=0;


	a[0]=1;
	size=1;

	for(int i=2;i<=n;i++){
		//Multiply

		size = Multiply(i,a,size);

	}


	for(int i=size-1;i>=0;i--){
		cout<<a[i];
	}



}







int main()
{

	int n;
	cin>>n;



	factorial(n);


	
	return 0;
}