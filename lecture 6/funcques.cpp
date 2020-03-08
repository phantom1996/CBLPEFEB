// funcques
#include <iostream>
using namespace std;


void printcelcius(int ini,int fin,int stp){
	for(int i=ini;i<=fin;i+=stp){
		int val=(5*(i-32))/9;
		cout<<i<<" "<<val<<endl;
	}
}

bool primechecker(int n){
	for(int i=2;i<=n-1;i++){
		//cout<<i<<" ";
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void printprime(int n){
	for(int i=2;i<=n;i++){
		bool is_prime=primechecker(i);
		if(is_prime){
			cout<<i<<" ";
		}
	}
	void h(){
		
	}
}




int main()
{
	// int initial,final,step;
	// cin>>initial>>final>>step;
	// printcelcius(initial,final,step);
	int n;cin>>n;
	// bool is_prime=primechecker(n);
	// cout<<boolalpha<<is_prime;

	printprime(n);
	
	return 0;
}