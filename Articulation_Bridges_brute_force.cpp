#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&matrix,vector<int>&vis,int node){
    vis[node]=1;
    int row=matrix.size();
    for(int i=0;i<row;i++){
        if(vis[i]==0&&matrix[node][i]==1){
            dfs(matrix,vis,i);
        }
    }

}
int articulation_points(vector<vector<int>>&matrix){
    int row=matrix.size();
    int count=0;
    vector<int>points;
    vector<int>vis(row,0);
    int ini_val=0;
    for(int i=0;i<row;i++){
        if(vis[i]==0){
            dfs(matrix,vis,i);
            ini_val++;
        }
        
    }

    int copy[row];

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            vis[j]=0;
            copy[j]=matrix[i][j];
            matrix[i][j]=0;
            matrix[j][i]=0;

        }
        int nval=0;
        for(int j=0;j<row;j++){
            if(vis[j]==0&&j!=i){
                nval++;
                
                dfs(matrix,vis,j);
            }
        }
        if(nval>ini_val){
            points.push_back(i);
            count++;
        }
        for(int j=0;j<row;j++){
            matrix[i][j]=copy[j];
            matrix[j][i]=copy[j];
        }
    }
    for(int i=0;i<points.size();i++)cout<<points[i]<<" ";
    cout<<endl;
    return count;
}
int main()
{

    int v=6;
    vector<vector<int>>matrix(v,vector<int>(v,0));
    matrix[0][1]=1;matrix[1][0]=1;
    matrix[2][1]=1;matrix[1][2]=1;
    matrix[1][3]=1;matrix[3][1]=1;
    matrix[3][4]=1;matrix[4][3]=1;
    matrix[2][4]=1;matrix[4][2]=1;
    matrix[0][5]=1;matrix[5][0]=1;
    
    cout<<articulation_points(matrix)<<endl;
    return 0;
}
