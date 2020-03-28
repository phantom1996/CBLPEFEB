// permutation
#include <iostream>
using namespace std;

void Permutation(char a[],int i){
	//base condition
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}
	//recusive case
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutation(a,i+1);
		swap(a[i],a[j]);//backtracking
	}

}
int main()
{

	char a[]="ABC";

	Permutation(a,0);
	
	return 0;
}