#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int cv; ///Cantidad de vertices
stack<pair<bool,int> > dfs;
stack<int> postOrder;
vector<int> newVec;
vector<int>::iterator it;
vector<vector<int> > graph;


void cargar()
{
    cin>>cv;
    graph = vector<vector<int> >(cv);
    cout<<endl;
    int n;
    for(int i=0;i<cv;i++)
    {
        cin>>n;
        while(n!=0)
        {
            graph[i].push_back(n-1);
            cin>>n;
        }
    }
}

int main()
{
    cargar();

    vector<bool> visited(graph.size());
	for(int i=0;i<cv;i++){
        if(visited[i]==false){
            dfs.push(make_pair(false,i));
        }
        while(!dfs.empty()){
            pair<bool,int> node=dfs.top();
            dfs.pop();
            if (node.first) {
            	postOrder.push(node.second);
            	//cout << node.second+1 << ' ';
            	continue;
            }
            visited[node.second]=true;
            dfs.push(make_pair(true, node.second));
            newVec=graph[node.second]; //vector of neighbors
            for(it=newVec.begin();it!=newVec.end();it++){
                int son=*it;
                if(visited[son]==false){
                    dfs.push(make_pair(false, son));
                }
            }
        }
    }
    while(!postOrder.empty())
    {
        cout<<postOrder.top()+1<<' ';
        postOrder.pop();
    }
    return 0;
}