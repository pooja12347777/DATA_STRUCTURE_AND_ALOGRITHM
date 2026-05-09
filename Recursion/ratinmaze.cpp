#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool issafe(int x,int y, int n,vector<vector<int>>& visited,vector<vector<int>> &m){
    if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y] == 0) && (m[x][y]==1)){
        return true;
        
    }
    else{
        return false;

    }
}
    void solve(int x,int y,int n, vector<vector<int>> &m, vector<vector<int>> &visited,vector<string>& ans,string path ){
        // base case
        if(x ==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y]=1;
    
    //  4 choices to move U ,D,L,R
    // D
    int newx = x+1;
    int newy = y;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(newx,newy,n,m,visited,ans,path);
        path.pop_back();
    }
    // U
     newx = x-1;
     newy = y;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(newx,newy,n,m,visited,ans,path);
        path.pop_back();
    }
    // R
     newx = x;
     newy = y+1;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(newx,newy,n,m,visited,ans,path);
        path.pop_back();
    }
    // L
     newx = x;
     newy = y-1;
    if(issafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(newx,newy,n,m,visited,ans,path);
        path.pop_back(); 
    }
    visited[x][y] =0;
    }



vector<string>findpath(vector<vector<int>> &m,int n){
    vector<string>ans;
    if(m[0][0]==0){
        return ans;
    }
    int srcx = 0;
    int srcy=0;
    vector<vector<int>>visited =m;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    string path = "";
    solve(srcx,srcy,n,m,visited,ans,path);
    sort(ans.begin(),ans.end());
    return ans;

};
int main() {
    int n = 4; // Size of the maze
    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    }; // Example maze

    vector<vector<int>> visited(n, vector<int>(n, 0)); // Visited matrix
    vector<string> ans; // To store all paths
    string path = ""; // Current path

    // Call the solve function
    solve(0, 0, n, m, visited, ans, path);
    // Print all paths
    cout << "Paths are:" << endl;
    for (const string& p : ans) {
        cout << p << endl;
    }

    // Print all paths
}