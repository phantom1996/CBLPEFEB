//bfs
#include <iostream>
#include <cstring>
#include <unordered_map>
#include <map>
#include <list>
#include <queue>
#include <climits>
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

    void SSSP(T src){
        queue<T> q;
        map<T,int> dist;
        for(auto i : mymap){
            dist[i.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        while(!q.empty()){
            T parent=q.front();
            q.pop();
            for(auto children : mymap[parent]){
                //distace update kra h
                if(dist[children]==INT_MAX){
                    dist[children]= dist[parent] + 1;
                    q.push(children);
                }
            }

        }

        for(auto i : dist){
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }

    }

    void DFS_Helper(T src, map<T,bool> &visited){
        cout<<src<<" ";
        visited[src]=true;

        for(auto child : mymap[src]){
            if(!visited[child]){
                DFS_Helper(child,visited);
            }
        }
    }
    void DFS(T src){
        map<T,bool > visited;
        DFS_Helper(src,visited);
        int component=1;
        for(auto i : mymap){
            if(!visited[i.first]){
                DFS_Helper(i.first,visited);
                component++;
            }
        }
        cout<<endl<<component<<endl;
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
    g.AddEdge(15,16);
    g.AddEdge(16,17);

    //g.print();
    //g.BFS(0);
    //g.SSSP(0);
    g.DFS(0);
    return 0;
}
