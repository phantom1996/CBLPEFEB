// pattern
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int val=1;
	int row_number=1;
	while(row_number<=n){
		int col_number=1;
		while(col_number<=row_number){
			 cout<<val;
			 val=val+1;
			 col_number=col_number+1;
		}
		cout<<endl;
		row_number=row_number+1;
	}
	
	return 0;
}