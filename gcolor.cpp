#include<iostream>
#include<vector>

using namespace std;
vector<bool> Total_color;

void addEdge(vector<int> adj[],int s,int d){

             adj[s].push_back(d);
             adj[d].push_back(s);
}




void color(vector<int> adj[],int Color[],int v){

    for(int i=0; i<v; i++){
	    
	      
	       for(auto x: adj[i]){
	          if(Color[x]>=0)
		   Total_color[Color[x]] = false;
	       }
	     
	     
	       
	       for(int j=0; j<v; j++){
	       
		  if(Total_color[j]== true){
		     Color[i]=j; 
		     break;
		  }
		   
	       }
	       
	       
	       for(auto x: adj[i]){
	          if(Color[x]>=0)
		   Total_color[Color[x]] = true;
	       }

     }

 }
 
 
int main(){
    int v;
    cin>>v;
    vector<int> adj[v];
    int Color[v];
    
    for(int i=0; i<v; i++){
       
       Color[i]= -1;
       Total_color.push_back(true);
    }
    
    // create graph
    
    addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,1, 2); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 4); 
    addEdge(adj,3, 4); 
    
    //call fun color
    
    cout<<"output\n";
    color(adj,Color,v);
    
    for(int i=0; i<v; i++){
       
       cout << i << "->" << Color[i]<<"\n";
    }

  return 0;
}
