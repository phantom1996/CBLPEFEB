#include <iostream>
#include <cstring>
#include <unordered_map>
#include <map>
#include <list>
#include <queue>
#include <climits>
#include <set>
using namespace std;
template <typename T>

class Graph{
    map<T,list<pair<T,int> > > mymap;

public:
    void addEdge(T src ,T dest,int edge_dist,bool bidirec=true){
        mymap[src].push_back(make_pair(dest,edge_dist));
        if(bidirec){
            mymap[dest].push_back(make_pair(src,edge_dist));
        }
    }
    void print(){
        for(auto i : mymap){
            cout<<i.first<<" : ";
            for(auto j : i.second){
                    cout<<"("<<j.first<<" , "<<j.second<<") ";

            }
            cout<<endl;
        }
    }

    void Dijikstra(T src){
        map<T,int> dist;
        for( auto i : mymap){
            dist[i.first]=INT_MAX;
        }
        set<pair<int,T> > s;

        dist[src]=0;

        s.insert(make_pair(0,src));
        while(!s.empty()){
            auto p = *(s.begin());
            s.erase(s.begin());
            int parentkaDistance = p.first;
            T parent  =  p.second;

            for(auto children : mymap[parent]){
                if(dist[children.first] > parentkaDistance + children.second){
                    auto f = s.find(make_pair(dist[children.first],children.first));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[children.first] = parentkaDistance + children.second;
                    s.insert(make_pair(dist[children.first],children.first));
                }
            }

        }

        for( auto i : dist){
            cout<<"Distance of "<<i.first <<" from "<<src<<" is "<<i.second<<endl;
        }

    }

};

int main(){

    Graph<string>g;
    g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Jaipur","Mumbai",8);

	//g.print();
	g.Dijikstra("Amritsar");
    return 0;
}
