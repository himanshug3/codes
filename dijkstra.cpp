//beAst
#include<iostream>

using namespace std;

#define FOR(a,b) for(int a=1;a<=b;a++)

int main(){
   int n;
   cout<<"dimension"<<endl;
   cin>>n;
   int mat[n+1][n+1];
   FOR(i,n){
      FOR(j,n){
         cin>>mat[i][j];
      }
   }
   /*
   FOR(i,n){
      cout<<endl;
      FOR(j,n){
         cout<<mat[i][j]<<" ";
      }
   }
   */
   FOR(k,n){
      FOR(i,n){
         FOR(j,n){
            if(mat[i][j]>mat[i][k]+mat[k][j]){
               mat[i][j]=mat[i][k]+mat[k][j];
            }
         }
      }
   }
   FOR(i,n){
      cout<<endl;
      FOR(j,n){
         cout<<mat[i][j]<<" ";
      }
   }
}
