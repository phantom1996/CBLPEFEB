#include<iostream>
using namespace std;
int main(){
   int n,no,a[100],i,j,ans=-1;
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
          ans=mid;
          s=mid+1;
       }
       else{
           e=mid-1;
       }
   }
   cout << ans<<endl;
   
    return 0;
}