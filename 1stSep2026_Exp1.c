/*
#include<stdio.h>
int binarysearch(int arr[],int low,int high, int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,8,9,12,19,33,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the value you are searching: ");
    scanf("%d",&key);
    int result=binarysearch(arr,0,n-1,key);
    if(result==-1){
        printf("Not Found!");
    }
    else{
        printf("Found at: %d",result);
    }
}


#include<stdio.h>
int binarysearch(int arr[],int low,int high, int key){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(key>arr[mid]){
        return binarysearch(arr,mid+1,high,key);
    }
    else{
        return binarysearch(arr,low,mid-1,key);
    }
}
int main(){
    int arr[]={2,3,8,9,12,19,33,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the value you are searching: ");
    scanf("%d",&key);
    int result=binarysearch(arr,0,n-1,key);
    if(result==-1){
        printf("Not Found!");
    }
    else{
        printf("Found at: %d",result);
    }
}
*/


#include <stdio.h>
void strassen(int A[2][2], int B[2][2], int C[2][2]) {
    int p1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int p2 = (A[1][0] + A[1][1]) * B[0][0];
    int p3 = A[0][0] * (B[0][1] - B[1][1]);
    int p4 = A[1][1] * (B[1][0] - B[0][0]);
    int p5 = (A[0][0] + A[0][1]) * B[1][1];
    int p6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int p7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    C[0][0] = p1 + p4 - p5 + p7;
    C[0][1] = p3 + p5;
    C[1][0] = p2 + p4;
    C[1][1] = p1 - p2 + p3 + p6;
}
int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    strassen(A, B, C);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
}