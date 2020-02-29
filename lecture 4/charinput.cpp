// charinput
#include <iostream>
using namespace std;

int main()
{

	char c;
	int cnt=0;
	//cin>>c; //single line comment
	c=cin.get();
	while(c!='$'){
		//multiline comments
		/*
		// digits
		if(c>=48 && c<=57){
		
		}
		ascii value of space=32
		else if(c==32){
	
		}
		else if(){
	
		}
		else{
	
		}
		*/
		cnt++;
		//cin>>c;
		c=cin.get();
	}
	cout<<cnt;
	
	return 0;
}