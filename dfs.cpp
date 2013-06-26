//beAst
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

#define FOR(a,b) for(int a=0;a<b;a++)
typedef vector<vector<int> > vvi;
typedef vector<int> vi;

void dfs(int ,vvi &);

vi visited(5,0);

int main(){
   vvi graph;
   FOR(i,5){
      vi node(5,0);
      FOR(j,5){
         cin>>node[j];
         }
      graph.push_back(node);
      }

    dfs(3,graph);

}

void dfs(int a,vvi &gr){
   vi list(5);
   list=gr[a];
   visited[a]=1;
   cout<<a<<" ";
   FOR(i,5){
      if(!visited[i]&&list[i]==1){
         dfs(i,gr);
      }
   }
}
