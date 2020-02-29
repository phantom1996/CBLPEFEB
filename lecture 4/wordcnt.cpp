// wordcnt
#include <iostream>
using namespace std;

int main()
{
	char c;
	int cntword=0;
	bool pehlaaaya=false;
	c=cin.get();
	while(c!='$'){
		if(c>=97 && c<=122 && pehlaaaya==false){
			cntword++;
			pehlaaaya=true;
		}
		if(c==32){
			pehlaaaya=false;
		}
		c=cin.get();
	}

	cout<<cntword;



	
	return 0;
}