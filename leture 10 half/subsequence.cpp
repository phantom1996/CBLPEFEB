// subsequence
#include <iostream>
using namespace std;



void subsequence(char a[],int i,char output[],int j){

	//base conditon
	if(a[i]=='\0'){
		//array a is empty
		output[j]='\0';
		cout<<output<<endl;
		return;
	}


	//recursive case
//ek baar mene output mein lga diya
	output[j]=a[i];

	subsequence(a,i+1,output,j+1);

//agli baar nahi lagana'

	subsequence(a,i+1,output,j);



}



int main()
{



	char a[]="abc";
	char  output[100];

	subsequence(a,0,output,0);


	
	return 0;
}