#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if(i==1 || i==row || j==1 || j==row){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=row-1;i>=1;i--){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            if(j==1 || j==i || i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k=1;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        if(i%2!=0){
            for(j=1;j<=row;j++){
                printf("%d ",k);
                k++;
            }
        }
        else{
            k=k+row-1;
            for(j=1;j<=row;j++){
                printf("%d ",k);
                k--;
            }
            k=k+row+1;
        }
        printf("\n");
    }
}