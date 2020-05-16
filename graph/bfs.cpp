//bfs
#include <iostream>
#include <cstring>
#include <unordered_map>
#include <map>
#include <list>
#include <queue>

using namespace std;
template <typename T>

class Graph{

    map<T,list<T> > mymap;

public:
    void AddEdge(T src, T dest, bool bidirectional=true){
        mymap[src].push_back(dest);

        if(bidirectional==true){
            mymap[dest].push_back(src);
        }
    }

    void print(){
    for(auto i : mymap){
        cout<<i.first<<" : ";
        for(auto j : i.second){
            cout<<j<<" -> ";
            }
            cout<<endl;
        }
    }

    void BFS(T src){
        queue<T> q;
        q.push(src);

        //map of keeping track of visisted nodes
        map<T,bool> visited;
        visited[src]=true;

        while(!q.empty()){
            T temp=q.front();
            q.pop();
            cout<<temp<<" ";
            //pushing the neighbour
            for(auto neigbour : mymap[temp]){
                if(!visited[neigbour]){
                    q.push(neigbour);
                    visited[neigbour]=true;
                }
            }
        }

    }



};



using namespace std;

int main()
{
    Graph<int> g;
    g.AddEdge(0,1);
    g.AddEdge(0,4);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(2,4);
    g.AddEdge(3,4);
    g.AddEdge(3,5);

    //g.print();
    g.BFS(0);
    return 0;
}
