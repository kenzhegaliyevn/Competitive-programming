// Time O(n + m) vertex + edge
// Space O(l) l - max number of nodes in a single level
#include <iostream>
#include <queue>

using namespace std;

vector<int> graph[1000];
bool used[1000];

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

    queue<int> q;
    q.push(0);
    used[0] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < graph[cur].size(); i++) {
            if (!used[graph[cur][i]]) {
                q.push(graph[cur][i]);
                used[graph[cur][i]] = true;
            }
        }
    }
    return 0;
}