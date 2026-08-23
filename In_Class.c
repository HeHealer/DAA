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


#include<stdio.h>
int binarysearch(int a[], int low, int high, int key){
    while(low<=high){
      int mid= low+(high-low)/2;
      printf("mid: %d\n",mid);
        if(a[mid]==key)
            return mid;
        if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int a[]={5,10,15,20,25,35,55,65};
    int n = sizeof(a)/sizeof(a[0]);
    int key=20;
    int result=binarysearch(a,0,n-1,key);
        printf("Element found at index: %d\n",result);
}


#include<stdio.h>
int linearsearch(int a[], int n, int key){
    for(int i=0; i<n; i++){
        printf("Checking index: %d\n", i);
        if(a[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int a[]={5,10,15,20,25,35,55,65};
    int n = sizeof(a)/sizeof(a[0]);
    int key=20;
    int result=linearsearch(a,n,key);
    printf("Element found at index: %d\n",result);
}
*/