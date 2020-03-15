// lenght of string
#include <iostream>
using namespace std;

int main()
{
	char a[1000];
	cin.getline(a,1000);
	int cnt=0;
	int i=0;
	while(a[i]!='\0'){
		i++;
		cnt++;
	}

	cout<<cnt;
	return 0;
}