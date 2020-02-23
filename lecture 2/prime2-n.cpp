// prime2-n
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int start=2;
	while(start<=n){
		int check=2;
		while(check<start){
			if(start%check==0){
				break;
			}
			else{
				check=check+1;
			}
		}
		if(check==start){
			cout<<start<<" ";
		}
		start=start+1;
	}



	
	return 0;
}