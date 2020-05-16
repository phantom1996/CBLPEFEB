// mapstl
#include <iostream>
#include <cstring>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

int main()
{

	//unordered_map<string,int> m;
    map<string,int> m;
	m.insert(make_pair("Pizza",100));

	pair<string,int> p("Burger",80);
	m.insert(p);


	m["Coke"]=80;

	//count
	string s="Turger";

	if(m.count(s)){
        cout<<"Price of "<<s<<" is "<<m[s]<<endl;
	}
	else{
        cout<<"Not in Menu"<<endl;
	}

    //naya loop for each loop ,range loop;

    auto x=5;

    auto y="CB";

    cout<<x<<" "<<y<<endl;


    for(auto i : m){

        cout<<i.first<<" "<<i.second<<endl;
    }



    unordered_map<string,list<string> > h;

    h["modi"].push_back("trumph");
    h["modi"].push_back("yogi");
    h["yogi"].push_back("prabhu");
    h["prabhu"].push_back("modi");
    h["modi"].push_back("putin");

    for(auto i : h){
        cout<<i.first<<" : ";
        for(auto j : i.second){
            cout<<j<<" -> ";
        }
        cout<<endl;
    }

	return 0;
}
