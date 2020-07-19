// ogs1

#include <iostream>
using namespace std;

int max_profit(int coins[],int s,int e){


	//base case 
	if(s>e){
		return 0;
	}

	int op1= coins[s] + min(max_profit(coins,s+2,e),max_profit(coins,s+1,e-1));

	int op2 = coins[e] + min(max_profit(coins,s+1,e-1), max_profit(coins,s,e-2));

	return max(op1,op2);
}



int main()
{
	int n;cin>>n;
	int coins[1000];
	
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}

	cout<<max_profit(coins,0,n-1);


	return 0;
}