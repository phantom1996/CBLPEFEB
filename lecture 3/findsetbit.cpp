// findsetbit
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int cntsetbit=0;
	while(n>=1){
		if(n%2==1){
			cntsetbit++;
		}
		n/=2;
	}

	cout<<cntsetbit<<endl;
	
	return 0;
}