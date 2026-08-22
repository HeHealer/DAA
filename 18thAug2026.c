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


*/