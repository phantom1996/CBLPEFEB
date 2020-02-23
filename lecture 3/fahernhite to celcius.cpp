// fahernhite to celcius
#include <iostream>
using namespace std;

int main()
{

	int intial,final,step_value;
	cin>>intial>>final>>step_value;
	// cin>>final;
	while(intial<=final){
		float celcius;
		//celcius=(5*(intial-32))/9;
		celcius=(5/9.0)*(intial-32);
		cout<<intial<<" "<<celcius<<endl;
		intial=intial+step_value;
	}



	
	return 0;
}