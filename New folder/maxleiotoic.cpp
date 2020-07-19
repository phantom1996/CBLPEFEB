// maxleiotoic
#include <iostream>

#include <climits>
using namespace std;


int maxleiotoic(int *a, int n){

	int* inc = new int[n];
	int* dec = new int[n];


	inc[0] = 1;
	dec[n-1] = 1;

	for(int i = 0;i < n-1 ; i++){
		if(a[i+1]>a[i]){
			inc[i+1] = inc[i] + 1;
		}
		else{
			inc[i+1] = 1;
		}
	} 

	//dec

	for(int i=n-2;i>=0;i--){
		if(a[i]>a[i+1]){
			dec[i] = dec[i+1] + 1;
		}
		else{
			dec[i] = 1;
		}
	}

	int ans = INT_MIN;

	for(int i=0;i<n;i++){

		ans = max(ans,(inc[i] + dec[i] -1));
	}

	return ans;

}





int main()
{
	int t;
	cin>>t;

	while(t--){
		int n;

		cin>>n;
		int * a = new int[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}


		int ans = maxleiotoic(a,n);

		cout<<ans<<endl; 
	}
	
	return 0;
}