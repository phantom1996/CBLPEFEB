// character array
#include <iostream>
using namespace std;

int main()
{
	// char a[]={'A','B','C','\0'};
	// cout<<a;
	// A
	//address of a
	// Abc g
	//a g

	// char a[]="welcome";
	// char s[]={'w','e','l','c','o','m','e'};
	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(s)<<endl;

	char a[100];
	int i=0;
	char ch;
	cin>>ch;
	while(ch!='\n'){
		a[i]=ch;
		i++;
		cin>>ch;
	}
	a[i]='\0';
	cout<<a;

	return 0;
}
