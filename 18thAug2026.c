/*
#include<stdio.h>
void printarray(int a[], int size){
    int i;
    for(i=0;i<size;i++){
      printf("%d", a[i]);  
}
printf("\n"); 
}
void selectionsort(int a[],int n){
    int i,j,temp,min;
    for(i=0;i<=n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
             min=j;
            }
        }
        if(min != i){
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
        }
        printf("pass %d: ",i+1);
        printarray(a,n);
    }
}
  int main(){
    int a[]={10,55,65,5,15,25,35,20};
    int n = sizeof(a)/sizeof(a[0]);
    selectionsort(a,n);
    printarray(a,n);
}


#include<stdio.h>
void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void insertionsort(int a[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        printf("pass %d: ",i);
        printarray(a,n);

    }
}
int main(){
    int a[]={4,5,6,7,3};
    int n=sizeof(a)/sizeof(a[0]);
    insertionsort(a,n);
    printarray(a,n);
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
    if(result==-1){
        printf("Not Found");
    }
    else{
        printf("Element found at index: %d\n",result);
    }
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
    if(result==-1){
        printf("Not Found");
    }
    else{
        printf("Element found at index: %d\n",result);
}
*/