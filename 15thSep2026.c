/*
#include<stdio.h>
void printarray(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int partition(int a[],int low,int high,int n){
    int pivot=a[low];
    int i=low;
    for(int j=low+1;j<=high;j++){
        if(a[j]<=pivot){
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[i];
    a[i]=a[low];
    a[low]=temp;
    printf("Pivot element placed: %d at index %d\n", a[i], i);
    printf("Array state: ");
    printarray(a, n);
    return i;
}
void quicksortDAC(int a[],int low,int high,int n){
    if(low<high){
        int pivot=partition(a,low,high,n);
        quicksortDAC(a,low,pivot-1,n);
        quicksortDAC(a,pivot+1,high,n);
    }
}
int main(){
    int a[]={5,10,3,6,9,2,11,4};
    int n=sizeof(a)/sizeof(a[0]);
    quicksortDAC(a,0,n-1,n);
    printf("Final Sorted Array: ");
    printarray(a,n);
}


int maxSubarraySumOptimized(int arr[], int size) {
    int maxSum = arr[0];
    for (int i = 0; i < size; i++) {
        int currentSum = 0;
        for (int j = i; j < size; j++) {
            currentSum += arr[j]; 
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;
}
int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubarraySumBruteForce(arr, size);
    printf("Maximum subarray sum is: %d\n", max_sum);
}


#include <stdio.h>
int maxSubArraySum(int arr[], int low, int high) {
    if (low == high)
    {
        return arr[low];
    }
    int mid = (low + high) / 2;
    int left_max = maxSubArraySum(arr, low, mid);
    int right_max = maxSubArraySum(arr, mid + 1, high);
    int sum = 0;
    int left = arr[mid];
    for (int i = mid; i >= low; i--) {
        sum += arr[i];
        if (sum > left){
            left = sum;
        }
    }
    sum = 0;
    int right = arr[mid + 1];
    for (int i = mid + 1; i <= high; i++) {
        sum += arr[i];
        if (sum > right){
            right = sum;
        }
    }
    int cross_max = left + right;
    if (left_max >= right_max && left_max >= cross_max) {
        return left_max;
    }
    else if (right_max >= left_max && right_max >= cross_max) {
        return right_max;
    }
    else {
        return cross_max;
    }
}
int main() {
    int arr[] = {1, -6, 3, 2, -2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum sum is: %d\n", maxSubArraySum(arr, 0, n - 1));
}

*/