// 2d array seacrh
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
	// int key;cin>>key;
	// for(int row_number=0;row_number<n;row_number++){
	// 	for(int col_number=0;col_number<m;col_number++){
	// 		if(a[row_number][col_number]==key){
	// 			cout<<"the key is found at row "<<row_number<<" and at col "<<col_number;
	// 			return 0;

	// 		}
	// 	}
	// }
	
	return 0;
}