// sudokosolver
#include <iostream>
#include<cmath>
using namespace std;



bool is_numbervalid(int mat[][9],int i,int j,int number,int n){

	//row col
	for(int k=0;k<n;k++){
		if(mat[i][k]==number  || mat[k][j]==number){
			return false;
		}
	}

	//submatrix checking
	n=sqrt(n);
	int startrowcord=(i/n)*n;
	int startcolcord=(j/n)*n;


	for(int p=startrowcord;p<startrowcord+n;p++){
		for(int q=startcolcord;q<startcolcord+n;q++){
			if(mat[p][q]==number){
				return false;
			}
		}
	}
	return true;

}




bool sudokosolver(int mat[][9],int i,int j,int n){
	//base case
	if(i==n){
		for(int row=0;row<n;row++){
			for(int col=0;col<n;col++){
				cout<<mat[row][col]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	//base condition
	if(j==n){
		return sudokosolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return sudokosolver(mat,i,j+1,n);
	}

	//ek kaam mereko karna h

	for(int number =1;number<=9;number++){
		if(is_numbervalid(mat,i,j,number,n)){
			mat[i][j]=number;
			bool kyaaagesebaatnbani=sudokosolver(mat,i,j+1,n);
			if(kyaaagesebaatnbani){
				return true;
			}
			//backtrack
			mat[i][j]=0;
		}
	}

	return false;







}




int main()
{
	int mat[9][9] =
{{5,3,0,0,7,0,0,0,0},
{6,0,0,1,9,5,0,0,0},
{0,9,8,0,0,0,0,6,0},
{8,0,0,0,6,0,0,0,3},
{4,0,0,8,0,3,0,0,1},
{7,0,0,0,2,0,0,0,6},
{0,6,0,0,0,0,2,8,0},
{0,0,0,4,1,9,0,0,5},
{0,0,0,0,8,0,0,7,9}};


	sudokosolver(mat,0,0,9);

	
	return 0;
}