// breakcontinue
#include <iostream>
using namespace std;

int main()
{
	int i=1;
	// while(i<=5){
	// 	cout<<i<<" ";
	// 	if(i==3){
	// 		break;
	// 	}
	// 	i=i+1;
	// }
	// cout<<endl;
	// cout<<i;

	//continue;

	while(i<=5){
		if(i==3){
			cout<<"IN COMTINUE STATEMENT"<<endl;
			i=i+1;
			continue;
		}
		cout<<i<<" ";
		i=i+1;
	}




	
	return 0;
}