// Time O(n + m) edge + vertex
// Space O(h) height of tree

#include <iostream>
#include <queue>

using namespace std;

vector<int> graph[1000];
bool used[1000];

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < graph[v].size(); i++)
        if (!used[graph[v][i]])
            dfs(graph[v][i]);
}


int main() {
    int n, m;       
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        u--;
        v--;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    dfs(0);

    return 0;
}