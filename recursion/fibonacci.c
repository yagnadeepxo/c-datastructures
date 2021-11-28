// fibonacci series without recursion
#include<stdio.h>
int main(){
    int number,i,n1=0,n2=1,n3;
    printf("enter the number of elements to be printed");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);
    for(i=2;i<number;i++){
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3; 
    }
return 0;
}

//fibonacci with recursion
int fib(int i){
    if(i==0) return 0;
    if(i==1) return 1;
    return fib(i-1)+fib(i-2);
}

void main(){
    int n,i;
    printf("enter the the number: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\t",fib(i));
    }
}