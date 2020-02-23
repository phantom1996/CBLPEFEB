// patter incdec
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int row_no=1;
	while(row_no<=n){

		//spaces

		int space =1;
		while(space<=(n-row_no)){
			cout<<" ";
			space=space+1;
		}

		// increasing
		int incval=row_no;
		while(incval<=2*row_no-1){
			cout<<incval;
			incval=incval+1;
		}

		//decreasing
		int decvar=2*row_no-2;
		while(decvar>=row_no){
			cout<<decvar;
			decvar=decvar-1;
		}


		cout<<endl;
		row_no=row_no+1;
	}


	
	return 0;
}