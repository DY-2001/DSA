#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
          vector<int> re;
          vector<int> visited(V, 0);
          int s = 0;
          queue<int> q;
          q.push(s);
          visited[0] = 1;
          
          while(!q.empty()) {
              re.push_back(q.front());
              for(auto it = adj[q.front()].begin(); it != adj[q.front()].end(); it++)  {
                  if(visited[*it] == 0) {
                      q.push(*it);
                      visited[*it] = 1;
                  }
              }
              q.pop();
          }
                
          return re;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} 
