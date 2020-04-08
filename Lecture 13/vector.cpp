// vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<int> v;
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// cout<<v.max_size()<<endl;

	// v.push_back(1);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// v.push_back(2);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	
	// v.push_back(3);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// v.pop_back();
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;


	for(int i=1;i<=10;i++){
		v.push_back(i);
	}
	cout<<v.capacity()<<endl;
	cout<<v.front()<<endl;
	for(int i=0;i<10;i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}