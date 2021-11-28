/*

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

*/

#include<stdio.h>

void pattern4(int n){
    int row,col;
    for(row=1;row<=2*n-1;row++){
        if(row<n+1){
            for(col=1;col<=row;col++){
                printf("* ");
            }
        }
        else{
            for(col=1;col<=2*n-row;col++){
                printf("* ");
            }
        }
        printf("\n");
    }
}

void main(){
    pattern4(5);
}