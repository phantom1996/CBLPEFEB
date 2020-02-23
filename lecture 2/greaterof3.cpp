// greaterof3
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"A is larger"<<endl;
	}
	else if(b>a && b>c){
		cout<<"B is Larger"<<endl;
	}
	else{
		cout<<"C is greater"<<endl;
	}



	
	return 0;
}