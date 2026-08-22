/*
#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<row;i++){
        for(j=1;j<=i;j++){
            printf("* ");
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
        for(j=row;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=0;i<=row;i++){
        for(j=1;j<=2*i;j++){
            printf(" ");
        }
        for (k=row;k>i;k--){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for (k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for (k=row;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for (k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for (k=row-1;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for (k=1;k<=row;k++){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for (k=1;k<row;k++){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for (k=row;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for (k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(row-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(row-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
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
        for(j=1;j<=row;j++){
            if(j==i || j==row-i+1){
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
    int row,i,j,mid;
    printf("Enter odd no. of rows: ");
    scanf("%d",&row);
    mid=row/2+1;
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if(i==mid || j==mid){
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
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(row-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(row-i);j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
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
        for(j=1;j<=row;j++){
            printf("%d ",j);
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
        for(j=1;j<=row;j++){
            printf("%d ",i);
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
            printf("%d ",j);
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
            printf("%d ",i);
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
        for(j=row;j>=i;j--){
            printf("%d ",row-j+1);
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
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k,n;
    int num=1;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(n=1;n<=row-i;n++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d ",num);

            num=num*(i-j)/(j+1);
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
        for(j=1;j<=row;j++){

            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("%d",i);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            ch='A'+j-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            ch='A'+j-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        ch='A'+i-1;
        for(j=1;j<=i;j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            ch='A'+j-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch='A';
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j,k;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            ch='A'+j-1;
            printf("%c",ch);
        }
        for(k=i-1;k>=1;k--){
            ch='A'+k-1;
            printf("%c",ch);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int row,i,j;
    char ch;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=i;j>=1;j--){
            ch='A'+j-1;
            printf("%c ",ch);
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
        for(j=1;j<=row;j++){
            if(i==j){
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
    int row,i,j,n=1;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if(i==1 || i==row || j==1 || j==row){
                printf("%d ",n++);
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

*/