/* Code written by : ARUN KUMAR V
   DIJKSTRA'S ALG for shortest path in a graph */
#include <iostream>
#include <vector>

using namespace std;

enum Status {
	visited,
	not_visited
	}

int main()
{
}

class Graph()
{
private :
vector<Node*> listofnodes;



public :
void addnewnode(Node* newnode)
{
   listofnodes.push_back(newnode);
}
void displaygraph()
{
   for(int i=0;i<listofnodes.size();++i)
   {
   listofnodes[i]->displayadjvertices();
   }
}
}
//class for edges
class Edges
{
private :
// weight,two nodes,name
Node *start_node, *end_node
unsigned weight;

public :
Edge(Node *org_node,Node *dst_node,unsigned incost)
{
   start_node=org_node;
   end_node=dst_node;
   weight=incost;
}
Node* getdstnode()
{  
   return end_node;
}

Node* getsrcnode()
{  
   return org_node;
}

int getweight()
{  
   return weight;
}
 }
//class for nodes
class Node
{
private :
//name,outgoing list of edges,no. of outgoing nodes
string name;
vector<Edge> connected_edges;
int no_f_cnodes;
enum Status stat;


public :
Node (string nam)
{
name=id;
stat=not_visited;
}
string getname();
{
  return name;
}
void addnode(Node *dstNode,unsigned cost)
{
   Edge  e1(this,dst_node,cost);
   connected_edges.push_back(e1); 
}
vector<Edge>& listadjnodes(Node *innode)
{
   return connected_edges;
}
void displayadjvertices(Node* invertex)
{
   for(int i=0; i<connected_edges.size();++i)
   Edge e2=connected_edges[i];
   cout << e2.getdstnode()->name;
}
}
