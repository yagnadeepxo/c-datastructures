/*
* * * * *
* * * * * 
* * * * *
* * * * *
* * * * *
*/



#include<stdio.h>

void pattern1(int n){
    int row,col;
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    pattern1(5);
}