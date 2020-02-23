// patterstar1
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int row_no;
	for(row_no=1;row_no<=n;row_no++){
		//normal traingle
		int j;
		for(j=1;j<=row_no;j++){
			cout<<"*";
		}
		cout<<" ";
		//inverted traingle
		for(j=1;j<=(n-row_no+1);j++){
			cout<<"*";
		}
		cout<<" ";
		//inverted
		for(j=1;j<=(n-row_no+1);j++){
			cout<<"*";
		}
		cout<<" ";
		for(j=1;j<=row_no;j++){
			cout<<"*";
		}
		cout<<endl;
	}


	
	return 0;
}