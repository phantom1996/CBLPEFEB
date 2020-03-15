// palindrome
#include <iostream>
using namespace std;

int len(char a[]){
	int cnt=0;
	int i=0;
	while(a[i]!='\0'){
		i++;
		cnt++;
	}
	return cnt;
}
int main()
{
	char a[100];
	cin.getline(a,100);
	int start=0;
	int end=len(a)-1;
	//comparison
	while(start<end){
		if(a[start]!=a[end]){
			cout<<"NOT PALINDROME";
			return 0;
		}
		start++;
		end--;
	}
	cout<<"PALINDROME";
	
	return 0;
}