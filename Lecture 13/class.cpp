// class
#include <iostream>
#include<cstring>
using namespace std;

//blueprint

class Car
{
// private:
// 	int price;
public:
	//char name[50];
	char *name;
	int price;
	int seater;
	char series[50];

	//syatx of constructor
	Car(){
		cout<<"I am In constructor"<<endl;
	}
//parameterised
	Car(char a[],int p,int s,char sry[]){
		cout<<"Hi i am in parameterised constructor"<<endl;
		//strcpy(name,a); copy 2 char array;
		int len=strlen(a);
		name=new char[len+1];
		strcpy(name,a);
		price=p;
		seater=s;
		strcpy(series,sry);
	}
// making of copy constructure
	Car(Car &B){
		cout<<"I am in copy constructure"<<endl;
		//strcpy(name,B.name);
		int len=strlen(B.name);
		name=new char[len+1];
		strcpy(name,B.name);
		price=B.price;
		seater=B.seater;
		strcpy(series,B.series);
	} 	
	
	void getinput(char a[],int p,int s,char sry[]){
		//strcpy(name,a);
		int len=strlen(a);
		name=new char[len+1];
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


//operator overloadig

/*return_type "operator" typeofoperator(){

}*/

void operator +=(Car B){
	int l=strlen(name)+strlen(B.name)+1; //for null +1
	char *oldameofA=name;
	name=new char[l];
	//copy
	int k=0;
	for(int i=0;i<strlen(oldameofA);i++){
		name[k]=oldameofA[i];
		k++;
	}
	//copy b
	for(int i=0;i<strlen(B.name);i++){
		name[k]=B.name[i];
		k++;
	}
	name[k]='\0';

	price+=B.price;
	seater+=B.seater;

	//normal copying of array;

	int j=strlen(series);

	for(int i=0;i<strlen(B.series);i++){
		series[j]=B.series[i];
		j++;
	}

	series[j]='\0';

}



	//destructor

	~Car(){
		//destructor
		cout<<"i am in destructor"<<endl;

	}



	
};


void print2(Car A){
		cout<<"Name of car is  "<<A.name<<endl;
		cout<<"Price of car is  "<<A.price<<endl;
		cout<<"Seats  of car is  "<<A.seater<<endl;
		cout<<"Series of car is  "<<A.series<<endl;	
}



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
	//c->b

	B.name[0]='T';

	print2(A);
	Car D(A);
	//A.print();
	cout<<endl;
//	B.print();
	cout<<endl;
//	C.print();
	cout<<endl;
//	D.print();
	cout<<endl;
	Car E;
	E=A;//copy assigmet operator
//	E=D;
//	E.print();
	A+=B;
	cout<<endl;
//	A.print();
//	A.price=5;
//	A.updateprice(10000);
//	A.print();

	//B.print();
	//C.print();

	return 0;
}