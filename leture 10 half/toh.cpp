// toh
#include <iostream>
using namespace std;

int cnt=0;
void ToH(int n,char src,char helper,char dest){
	//base case;
	if(n==0){
		return;
	}
	cnt++;

//rec move n-1 from src to helper(dest) using dest(helper)
	ToH(n-1,src,dest,helper);
	cout<<"Moving "<<n<<" From "<<src<<" To "<<dest<<endl;
//rec move n-1 from hel(src)   src(helper)    ----> dest
	ToH(n-1,helper,src,dest);
}



int main()
{

	int n;
	cin>>n;
	ToH(n,'A','B','C');

	cout<<cnt;

	
	return 0;
}