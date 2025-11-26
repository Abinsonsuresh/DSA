#include <stdio.h>

#define MAX 20

int visited[MAX];

// DFS Function
void dfs(int v, int n, int a[][MAX]) {
    visited[v] = 1;
    printf("%d ", v);   // Print the visited node

    for (int i = 0; i < n; i++) {
        if (a[v][i] == 1 && !visited[i]) {
            dfs(i, n, a);
        }
    }
}

int main() {
    int a[MAX][MAX], n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Initialize visited array
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(start, n, a);

    return 0;
}
