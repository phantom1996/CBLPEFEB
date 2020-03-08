#include<iostream>
using namespace std;
int main(){
   int n,no,a[100],i,j;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];    
   }
   int key;
   cin>>key;

   int s=0,e=n-1;
   while(s<=e){
       int mid=(s+e)/2;
       if(a[mid]<key){
           s=mid+1;
       }
       else if(a[mid]==key){
           cout<<mid<<endl;
           break;
       }
       else{
           e=mid-1;
       }
   }
   if(s>e){
       cout << "-1"<<endl;
   }
  
    return 0;
}