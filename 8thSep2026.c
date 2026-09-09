/*
#include<stdio.h>
void minmaxDAC(int arr[],int i,int j,int *min,int *max){
    if(i==j){
        *min=arr[i];
        *max=arr[i];
        return;
    }
    if((j-i)==1){
        if(arr[i]<arr[j]){
            *min=arr[i];
            *max=arr[j];
        }
        else{
            *min=arr[j];
            *max=arr[i];
        }
        return;
    }
    else{
        int mid=(i+j)/2;
        int LMin,LMax;
        int RMin,RMax;
        minmaxDAC(arr,i,mid,&LMin,&LMax);
        minmaxDAC(arr,mid+1,j,&RMin,&RMax);
        if(LMax>RMax){
            *max=LMax;
        }
        else{
            *max=RMax;
        }
        if(LMin<RMin){
            *min=LMin;
        }
        else{
            *min=RMin;
        }
    }
}
int main(){
    int arr[]={6,4,3,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min,max;
    minmaxDAC(arr,0,n-1,&min,&max);
    printf("Min: %d, Max: %d\n", min, max);
}


#include <stdio.h>
int fibonacciDAC(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int left_part = fibonacciDAC(n - 1);
    int right_part = fibonacciDAC(n - 2);
    return left_part + right_part;
}
int main() {
    int terms;
    printf("Enter No. of term you want: ");
    scanf("%d",&terms);
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacciDAC(i));
    }
    printf("\n");
}


#include <stdio.h>
int powerDAC(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }
    int half_power = powerDAC(x, n / 2);
    if (n % 2 == 0) {
        return half_power * half_power;
    }
    else {
        return half_power * half_power * x;
    }
}
int main() {
    int base, exp;
    printf("Enter Base number(x): ");
    scanf("%d", &base);
    printf("Enter Power enter(n): ");
    scanf("%d", &exp);
    int result = powerDAC(base, exp);
    printf("\nResult: %d\npower %d = %d\n", base, exp, result);
}
*/