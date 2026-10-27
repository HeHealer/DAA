#include <stdio.h>
#define N 4
int matrix[N][N] = {
    {0, 0, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 1, 0}
};
int knows(int A, int B) {
    return matrix[A][B] == 1;
}
int findCelebrity(int n) {
    int candidate = 0;
    for (int i = 1; i < n; i++) {
        if (knows(candidate, i)) {
            candidate = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != candidate) {
            if (knows(candidate, i) || !knows(i, candidate)) {
                return -1;
            }
        }
    }
    return candidate;
}
int main() {
    int celebrityId = findCelebrity(N);
    if (celebrityId == -1) {
        printf("There is no celebrity at the party.\n");
    } else {
        printf("The celebrity at the party is Person ID: %d\n", celebrityId);
    }
}