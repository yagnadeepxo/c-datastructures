/*
*
**
***
****
*****
*/
#include<stdio.h>
void pattern2(int n){
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    pattern2(5);
}

