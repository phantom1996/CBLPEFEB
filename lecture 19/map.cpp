// map
#include <iostream>
#include "mymap.h"
using namespace std;

int main()
{

	hashmap menu;
	menu.insert("Pepsi",50);
	menu.insert("Burger",80);
	menu.insert("Pizza",120);
	menu.insert("Noodles",75);
	menu.insert("Coke",60);

	//menu.print();
	// string key="Pizze";
	// int ans=menu.search(key);
	// if(ans!=-1){
	// 	cout<<"The Price of "<<key<<" is "<<ans;
	// }
	// else{
	// 	cout<<"Item not found";
	// }

	cout<<menu["Pizza"];

	
	return 0;
}