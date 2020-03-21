// wave print col
#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int row_number=0;row_number<n;row_number++){
		for(int col_number=0;col_number<m;col_number++){
			cin>>a[row_number][col_number];
		}
	}

	for(int col_number=0;col_number<m;col_number++){
		if(col_number%2==0){
			//even case
			for(int row_number=0;row_number<n;row_number++){
				cout<<a[row_number][col_number]<<" ";
			}
		}
		else{
			for(int row_number=n-1;row_number>=0;row_number--){
				cout<<a[row_number][col_number]<<" ";
			}			
		}
	}




	
	return 0;
}