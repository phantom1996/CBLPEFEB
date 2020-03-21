// spiral print
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
	int sr=0,sc=0,er=n-1,ec=m-1;
	int ele=0;
	while(ele<n*m){
		//
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
			ele++;
		}
		sr++;
		if(ele>=n*m){
			break;
		}
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
			ele++;
		}
		ec--;
		if(ele>=n*m){
			break;
		}
		for(int i=ec;i>=sc;i--){
			cout<<a[er][i]<<" ";
			ele++;
		}
		er--;
		if(ele>=n*m){
			break;
		}
		for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<" ";
			ele++;
		}
		sc++;
	}

	
	return 0;
}