#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int stack[MAX], top = -1;

void push(int vertex) {
    if (top == MAX - 1)
        printf("\nStack Overflow\n");
    else
        stack[++top] = vertex;
}

int pop() {
    if (top == -1) {
        printf("\nStack Underflow\n");
        return -1;
    } else
        return stack[top--];
}

void dfs(int startVertex, int n) {
    int i, vertex;
    for (i = 0; i < n; i++)
        visited[i] = 0;

    push(startVertex);
    visited[startVertex] = 1;
    printf("%d ", startVertex);

    while (top != -1) {
        vertex = stack[top];
        for (i = 0; i < n; i++) {
            if (adj[vertex][i] == 1 && !visited[i]) {
                push(i);
                visited[i] = 1;
                printf("%d ", i);
                break;
            }
        }
        if (i == n)
            pop();
    }
}

int main() {
    int n, i, j, startVertex;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter the starting vertex for DFS: ");
    scanf("%d", &startVertex);
    printf("DFS Traversal: ");
    dfs(startVertex, n);
    printf("\n");

    return 0;
}
