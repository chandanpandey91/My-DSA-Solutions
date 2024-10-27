class Solution {
private:
    void dfs(int node,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis); 
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>&v) {
        int n=v.size();
        //we will convert adjacency matrix into adjacency list
        vector<int>adj[n];
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(v[i][j]==1 and i != j){
                    adj[i].push_back(j); 
                    adj[j].push_back(i);
                }
            }
        }
        // now making visited arrays and applying dfs
        vector<int> vis(n, 0);
        int cnt = 0; 
        for(int i = 0;i<n;i++) {
            // if the node is not visited
            if(!vis[i]) {
                // counter to count the number of provinces 
                cnt++;
               dfs(i,adj,vis); 
            }
        }
        return cnt;

    }
};