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