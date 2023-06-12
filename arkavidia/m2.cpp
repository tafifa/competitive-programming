// C++ program to print DFS traversal from
// a given vertex in a given graph
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Graph class represents a directed graph
// using adjacency list representation
int mini = 1000000001;

class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;
	vector<int> valuee;
	vector<int> destina;
	vector<int> himpnilai;
	// function to add an edge to graph
	void addEdge(int v, int w);
	void addvalue(int a);
	void tujuan(int a);
	void nilaiterkecil(int a);
	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v, int z, int x);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}
void Graph::addvalue(int a){
	valuee.push_back(a);
}
void Graph::tujuan(int a){
	destina.push_back(a);
}
void Graph::nilaiterkecil(int a){
	himpnilai.push_back(a);
}

void Graph::DFS(int v, int min, int x)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	
	if(valuee[v-1] < min){
		min = valuee[v-1];
	}
	
	if(v == x){
		cout<<min<<" ";
		//cout<<v<<"\n";
		return;
	}
	
	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i, min, x);
}

// Driver's code
int main()
{
	// Create a graph given in the above diagram
	Graph g;
	int n, x;
	cin>>n>>x;
	for(int i=0; i<n; i++){
		int b; cin>>b;
		g.addvalue(b);
	}
	for(int i=0; i<n-1; i++){
		int a, b;
		cin>>a>>b;
		g.addEdge(a, b);
		g.addEdge(b, a);
	}
	/*
	g.addEdge(1, 2);
	g.addEdge(2, 1);
	g.addEdge(2, 3);
	g.addEdge(3, 2);
	g.addEdge(4, 3);
	g.addEdge(3, 4);
	g.addEdge(5, 4);
	g.addEdge(4, 5);
	g.addvalue(90);
	g.addvalue(99);
	g.addvalue(5);
	g.addvalue(1);
	g.addvalue(8);
	*/
	//g.tujuan(x);

	// Function call
	// for(int i=1; i<=n; i++){
	// 	g.DFS(i, mini, x);
	// }
  g.DFS(1, mini, x);
  g.DFS(2, mini, x);
  g.DFS(3, mini, x);
  g.DFS(4, mini, x);
  g.DFS(5, mini, x);

  cout << mini << ' ' << x << endl;
	
	
	  

	return 0;
}

/*
5 3
90 99 5 1 8
1 2
2 3
3 4
4 5
*/