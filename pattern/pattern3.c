/*

*****
****
***
**
*

*/
#include<stdio.h>
void pattern3(int n){
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row+1;col++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    pattern3(5);
}