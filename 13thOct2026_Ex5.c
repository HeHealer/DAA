/*
#include <stdio.h>
void bubblesort(int start[],int finish[],int n){
    int i,j,temp,tempu;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(finish[j]>finish[j+1]){
                temp=finish[j];
                finish[j]=finish[j+1];
                finish[j+1]=temp;
                tempu = start[j];
                start[j] = start[j + 1];
                start[j + 1] = tempu;
            }
        }
    }
}
int main() {
    int start[]  = {1,3,0,5,8,5};
    int finish[] = {6,9,2,9,7,4};
    int n=sizeof(finish)/sizeof(finish[0]);
    bubblesort(start, finish, n);
    printf("Sorted Pairs (Start -> Finish):\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", start[i], finish[i]);
    }
    printf("\n");
    printf("Selected Activities: ");
    int last=0; 
    printf("A%d ", last+1);
    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[last]) {
            printf("A%d ", i + 1);
            last= i;
        }
    }
    printf("\n");
}


#include <stdio.h>
#define V 9 
#define INF 999999 
int minDistance(int dist[], int sptSet[]) {
    int min = INF, min_index = -1;
    for (int v = 0; v < V; v++) {
        // Using 0 as false
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF) {
            printf("%d \t INF\n", i);
        } else {
            printf("%d \t\t %d\n", i, dist[i]);
        }
    }
}
void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int sptSet[V];
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        sptSet[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        if (u == -1 || dist[u] == INF) {
            break;
        }sptSet[u] = 1;
        for (int v = 0; v < V; v++) {
            if (sptSet[v] == 0 && graph[u][v] != 0 && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    printSolution(dist);
}
int main() {
    int graph[V][V] = {
        { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    (graph, 0);
}


#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[10];
    int value;
    int weight;
    double ratio;
} Item;
int compareItems(const void *a, const void *b) {
    double ratioA = ((Item *)a)->ratio;
    double ratioB = ((Item *)b)->ratio;
    if (ratioB > ratioA) return 1;
    if (ratioB < ratioA) return -1;
    return 0;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
void greedyKnapsack(Item items[], int n, int capacity) {
    qsort(items, n, sizeof(Item), compareItems);
    int totalValue = 0;
    int totalWeight = 0;
    printf("=== GREEDY APPROACH ===\n");
    printf("Selected Items: ");
    for (int i = 0; i < n; i++) {
        if (totalWeight + items[i].weight <= capacity) {
            printf("%s ", items[i].name);
            totalValue += items[i].value;
            totalWeight += items[i].weight;
        }
    }
    printf("\nTotal Value Obtained: $%d\n", totalValue);
    printf("Total Weight Used:    %d kg / %d kg\n\n", totalWeight, capacity);
}
void dpKnapsack(Item items[], int n, int capacity) {
    int **dp = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int *)malloc((capacity + 1) * sizeof(int));
    }
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (items[i - 1].weight <= w) {
                dp[i][w] = max(dp[i - 1][w], items[i - 1].value + dp[i - 1][w - items[i - 1].weight]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    int totalValue = dp[n][capacity];
    int totalWeight = 0;
    int w = capacity;
    printf("=== DYNAMIC PROGRAMMING APPROACH ===\n");
    printf("Selected Items: ");
    for (int i = n; i > 0; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            printf("%s ", items[i - 1].name);
            totalWeight += items[i - 1].weight;
            w -= items[i - 1].weight;
        }
    }
    printf("\nTotal Value Obtained: $%d\n", totalValue);
    printf("Total Weight Used:    %d kg / %d kg\n", totalWeight, capacity);

    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);
}
int main() {
    Item dataset[] = {
        {"Item 1", 60, 1, 60.0 / 1.0},
        {"Item 2", 100, 2, 100.0 / 2.0},
        {"Item 3", 120, 3, 120.0 / 3.0}
    };
    int n = 3;
    int capacity = 5;
    greedyKnapsack(dataset, n, capacity);
    dpKnapsack(dataset, n, capacity);
}
*/