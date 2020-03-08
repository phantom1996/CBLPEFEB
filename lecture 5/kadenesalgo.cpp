#include<iostream>
using namespace std;
int main(){
   int n,a[1000],i,j,cs,ms;
   int t;
   cin>>t;
   while(t--){
       cs=0,ms=0;
       cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];    
   }
   for(int i=0;i<n;i++){
       cs=cs+a[i];
       if(cs<0){
           cs=0;
       }
       ms=max(cs,ms);
   }
  
   cout << ms<<endl;

   }
   
 
   
    return 0;
}