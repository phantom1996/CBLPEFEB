// nquuen
#include <iostream>
using namespace std;


bool is_valid(int n,int i,int j,int board[][100]){
	//row //col

	for(int k=0;k<n;k++){
		if(board[i][k]==1 || board[k][j]==1 ){
			return false;
		}
	}

	//left daigonal

	int row=i-1;
	int col=j-1;
	while(row>=0 && col>=0){
		if(board[row][col]==1){
			return false;
		}
		row--;
		col--;
	}


	//right daigonal
	row=i-1;
	col=j+1;
	while(row>=0 && col<n){
		if(board[row][col]==1){
			return false;
		}
		row--;
		col++;

	}
		return true;

}

bool Nqueens(int n,int row,int board[][100]){
	//base condition
	if(row==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		//
		return false;
	}
	int col;
	//ek kaam meeko karna h
	for(col=0;col<n;col++){
		if(is_valid(n,row,col,board)){
			board[row][col]=1;
			bool kyaaagesebaatbani=Nqueens(n,row+1,board);
			if(kyaaagesebaatbani){
				return true;
			}
			//backtrack
			board[row][col]=0;
		}
	}


	return false;


}




int main()
{
	int n;
	cin>>n;
	int board[100][100]={0};//initially zero where queen is placed marked as one (

	bool kyasolutionmila=Nqueens(n,0,board);
	if(kyasolutionmila==false){
		cout<<"Solution not Found";
	}




	
	return 0;
}