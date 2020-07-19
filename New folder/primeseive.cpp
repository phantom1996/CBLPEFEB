// primeseive
#include <iostream>
using namespace std;

const int size = 10000000;

bool prime[size];
int ans[size];
int ind = 0;

void primeseive(int n){
	//prime array sako true

	for(int i=0;i<size;i++){
		prime[i]=true;
	}

	prime[0]=false;
	prime[1]=false;


	for(int i=2;i*i<size;i++){

		if(prime[i]==true){
			ans[ind] = i;
			ind++;
			for(int j=i;i*j<size;j++){
				prime[i*j]=false;
			}
		}
	}

	// for(int i=0;i<20;i++){
	// 	cout<<prime[i]<<" ";
	// }
	cout<<ans[n-1];

}


int main()
{

	int n;

	cin>>n;

	primeseive(n);
	
	return 0;
}