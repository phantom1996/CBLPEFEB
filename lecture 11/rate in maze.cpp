// rate in maze
#include <iostream>
using namespace std;



bool RatInMaze(char a[][100],int i,int j,int n,int m,int path[][100]){
	//base case

	if(i==n-1 && j==m-1){
		//destination reached 
		path[i][j]=1;
		for(int p=0;p<n;p++){
			for(int q=0;q<m;q++){
				cout<<path[p][q]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	path[i][j]=1;//source wala bhi path ka ek valid block h

//right
	if( i<n  && j+1<m &&  a[i][j+1]!='x'){
		path[i][j+1]=1; //possible solution;
		bool kyaaagesebaatbani=RatInMaze(a,i,j+1,n,m,path);
		if(kyaaagesebaatbani){
			return true;
		}
	}
//down
	if(i+1 <n  && j<m && a[i+1][j]!='x'){

		path[i+1][j]=1;

		bool kyadownsebaatbani=RatInMaze(a,i+1,j,n,m,path);

		if(kyadownsebaatbani){
			return true;
		}
	}
//backtrack
	path[i][j]=0;

	return false;

}



int main()
{


//block position by x and open position by o;
	char a[100][100];
	int r,c;
	cin>>r>>c;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	int path[100][100]={0};

	RatInMaze(a,0,0,r,c,path);
	return 0;
}