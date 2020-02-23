// prime
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int check=2;
	while(check<n){
		if(n%check==0){
			cout<<"NOT PRIME"<<endl;
			return 0;

		}
		else{
			check=check+1;
		}
	}
	cout<<"PRIME"<<endl;
	return 0;
}