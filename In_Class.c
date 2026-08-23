/*
#include <stdio.h>
int main() {
    int arr[] = {10, 25, 15, 30, 20};
    int n = 5;
    int i;
    int largest = arr[0];
    int secondLargest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element = %d", secondLargest);
}


#include <stdio.h>
int main() {
    int arr[] = {10, 25, 15, 30, 20};
    int n = 5;
    int i;
    int smallest = arr[0];
    int secondSmallest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    printf("Second smallest element = %d", secondSmallest);
}
*/