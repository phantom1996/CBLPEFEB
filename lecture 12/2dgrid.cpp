// 2dgrid
#include <iostream>
using namespace std;

int gridans(int n,int m){
	if(n==0 || m==0){
		return 1;
	}
	//matrix se bahar ho gya
	if(n<0 || m<0){
		return 0;
	}
	int op1=gridans(n-1,m);
	int op2=gridans(n,m-1);
	return op1+op2;
}




int main()
{
	int n,m;
	cin>>n>>m;
	int ans=gridans(n,m);
	cout<<ans;
	return 0;
}