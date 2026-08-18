#include<stdio.h>
void printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("Pass %d: ",i+1);
        printarray(arr,n);
    }
}
int main(){
    int arr[]={1,6,3,4,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    printarray(arr, n);
}