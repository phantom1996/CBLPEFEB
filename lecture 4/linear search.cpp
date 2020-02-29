// linear search
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			cout<<"ELEMENT FOUND AT INDEX "<<i;
			return 0;
		}
	}
	cout<<"NOT FOUND";


	
	return 0;
}