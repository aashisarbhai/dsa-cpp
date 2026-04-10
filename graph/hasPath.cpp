#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>*l;

    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0;u<V;u++){
            cout<<u<<" : ";
            list<int>neighbors=l[u];

            for(int v:neighbors){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    bool hasPath(int src,int dest,vector<bool>&vis){
        if(src==dest) return true;

        vis[src]=true;
        list<int>neighbors=l[src];

        for(int v:neighbors){
            if(!vis[v]){
                if(hasPath(v,dest,vis)) return true;
            }
        }
        return false;
    }

    bool bfs(int src,int dest,vector<bool>&vis){
        queue<int>q;

        q.push(src);
        vis[src]=true;

        while(q.size()>0){
            int u=q.front();
            q.pop();

            if(u==dest) return true;

            list<int>neighbors=l[u];

            for(int v:neighbors){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return false;
    }
};

int main(){
    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(1,3);
    graph.addEdge(3,5);
    graph.addEdge(5,6);
    graph.addEdge(0,2);
    graph.addEdge(2,4);
    graph.addEdge(4,5);
    graph.addEdge(3,4);

    vector<bool>vis(7,false);
    cout<<graph.bfs(0,5,vis);

    return 0;
}