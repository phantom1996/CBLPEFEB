// list /map stl
#include <iostream>
#include <list>
using namespace std;

int main()
{
	//pair<int,int> p;
	// 1 locks p.first ,,,,p.secod

	list<int > l;
	l.push_front(4);
	l.push_front(3);
	l.push_front(2);
	l.push_front(1);
	l.push_back(5);
	
	while(!l.empty()){
		cout<<l.front()<<" ";
		l.pop_front();
	}

	list<pair<char,char> > mylist;
	mylist.push_front(make_pair('a','c'));
	mylist.push_front(make_pair('a','d'));
	mylist.push_front(make_pair('c','z'));
	mylist.push_front(make_pair('c','x'));
	while(!mylist.empty()){
		pair<char,char> c=mylist.front();
		cout<<c.first<<" "<<c.second<<endl;
		mylist.pop_front();
	}





	//Adjecy list

	//array of list

	//int *a= new int[5];

	list<int> * ml= new list<int>[5];

	ml[0].push_back(1);
	ml[0].push_back(4);
	ml[1].push_back(0);
	ml[1].push_back(2);
	ml[1].push_back(3);
	ml[1].push_back(4);
	ml[2].push_back(1);
	ml[2].push_back(3);
	ml[3].push_back(1);
	ml[3].push_back(2);
	ml[3].push_back(4);
	ml[4].push_back(1);
	ml[4].push_back(0);
	ml[4].push_back(3);

	for(int i=0;i<=4;i++){
		cout<<i<<" : ";
		while(!ml[i].empty()){
			cout<<ml[i].front()<<"->";
			ml[i].pop_front();
		}
		cout<<endl;
	}
	





	return 0;
}