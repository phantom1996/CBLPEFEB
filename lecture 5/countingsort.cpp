#include<iostream>
using namespace std;
int main(){
    int i,j,a[1000],n,min,no,max=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    int freq[max]
    for(i=0;i<=max;i++){
        freq[i]=0;
    }
    for(i=0;i<n;i++){
        freq[a[i]]++;
    }
   
    for(i=0;i<=max;i++){
        while(freq[i]){
            cout<<i<<" ";
            freq[i]--;

        }
        
    }
     cout<<endl;
    return 0;

}