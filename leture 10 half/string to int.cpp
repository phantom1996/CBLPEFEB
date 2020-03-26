// string to int
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;


int StringToInt(char a[],int i,int n){
	//base case
	if(i==n){
		return 0;
	}

	//recursive case
	int ans=(a[i]-'0')*pow(10,(n-i-1))+StringToInt(a,i+1,n);//assume

	return ans;
}




int main()
{

	char a[]="1234";
	int ans=StringToInt(a,0,strlen(a));
	cout<<ans<<endl;
	cout<<ans*2<<endl;



	
	return 0;
}