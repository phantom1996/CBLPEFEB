// class
#include <iostream>
#include<cstring>
using namespace std;

//blueprint

class Car
{
private:
	int price;
public:
	char name[50];
	int seater;
	char series[50];

	//syatx of constructor
	Car(){
		cout<<"I am In constructor"<<endl;
	}
//parameterised
	Car(char a[],int p,int s,char sry[]){
		cout<<"Hi i am in parameterised constructor"<<endl;
		strcpy(name,a);
		price=p;
		seater=s;
		strcpy(series,sry);
	}
// making of copy constructure
	Car(Car &B){
		cout<<"I am in copy constructure"<<endl;
		strcpy(name,B.name);
		price=B.price;
		seater=B.seater;
		strcpy(series,B.series);
	} 	
	
	void getinput(char a[],int p,int s,char sry[]){
		strcpy(name,a);
		price=p;
		seater=s;
		strcpy(series,sry);
	}
	void print(){
		cout<<"Name of car is  "<<name<<endl;
		cout<<"Price of car is  "<<price<<endl;
		cout<<"Seats  of car is  "<<seater<<endl;
		cout<<"Series of car is  "<<series<<endl;
	}
	void updateprice(int updatedprice){
		price=updatedprice;
	}
	
};

int main()
{
	Car A;
	Car B("BMW",100000, 2,"220");
	//copy constructor method 1
	Car C=B;

	//A mein name set kerna

	// cin>>A.name;
	// cin>>A.price;
	// cin>>A.seater;
	// cin>>A.series;

	// cout<<A.name<<endl;
	// cout<<A.price<<endl;
	// cout<<A.seater<<endl;
	// cout<<A.series<<endl;

	A.getinput("Swift",100,4,"110");
	//B.getinput();
	//C.getinput();

	//copy const. m,ethod 2
	Car D(A);
	A.print();
	cout<<endl;
	B.print();
	cout<<endl;
	C.print();
	cout<<endl;
	D.print();

//	A.price=5;
//	A.updateprice(10000);
//	A.print();

	//B.print();
	//C.print();
	return 0;
}