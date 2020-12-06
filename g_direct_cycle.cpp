                  #include<iostream>
		#include<vector>


		using namespace std;
 
                  //built graph
		void addadge(vector<int> adj[],int v,int e)
		{
		   adj[v].push_back(e);
		}

                  bool help(vector<int> adj[],bool vi[],bool stack[],int v){
                  
                       vi[v]=true;
                       stack[v]=true;
                     
                       for(auto x: adj[v]){
                          
                          if(vi[x]!=true && help(adj,vi,stack,x))
                              return true;
                          else if(stack[x])
                              return true;
                       }
                       
                       stack[v]=false;
                       return false;
                  
                  }
		
		
		
		void cyclic(vector<int> adj[],int V){ 
		  
			bool vi[V];      
		         bool stack[V];
		         
		         for(int i=0;i<V;i++){
		            vi[i]=false;
		            stack[i]=false;
		         }
		         
		         //for When two starting vertex present
		         
		         for(int i=0; i<V; i++){
		         
		            if(help(adj,vi,stack,i))
		                 cout<<"yes\n";//return true;
		                 break;
		         }
		         
		         //return false
		         cout<<"not\n";
		}



		int main(){
		int v;
		cin >> v;

		bool vis[v]={false};
		vector<int> adj[v];
		addadge(adj,0,1);
		addadge(adj,0,2);
		addadge(adj,2,3);
		addadge(adj,1,3);/*Pick the vertex with minimum distance value and not already included in SPT (not in sptSET). The vertex 1 is picked and added to sptSet. So sptSet now becomes {0, 1}. Update the distance values of adjacent vertices of 1. The distance value of vertex 2 becomes 12.*/


		addadge(adj,3,4);
		addadge(adj,4,1);
		
		cyclic(adj,v);


		}


