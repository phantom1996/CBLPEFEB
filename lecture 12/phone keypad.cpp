// phone keypad
#include <iostream>
#include<string>
using namespace std;

string s[]={"/#",".+","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void phonekeypad(char a[],int i,char output[],int j){
//base condition
	if(a[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	int index=a[i]-'0';
	
	//loop
	for(int k=0;s[index][k]!='\0';k++){
		output[j]=s[index][k];
		phonekeypad(a,i+1,output,j+1);
	}

}



int main()
{

	char a[1000];
	cin>>a;
	char output[1000];
	phonekeypad(a,0,output,0);
	
	return 0;
}