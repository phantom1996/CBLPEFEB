// currecyexchage
#include <iostream>
#include <climits>
using namespace std;


int minreq(int *coins,int n,int amount){

	//base

	if(amount==0){
		dp
		return 0;
	}

	int ans=INT_MAX;

	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int rem=minreq(coins,n,amount-coins[i]);

			ans=min(ans,rem+1);
		}
	}

	return ans;

}




int main()
{

	int coins[]={1,7,10};
	int n=3;

	int amount;
	cin>>amount;

	cout<<minreq(coins,n,amount)<<endl;
	
	return 0;
}