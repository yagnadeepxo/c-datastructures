#include<stdio.h>
#include<stdlib.h>
#define size 5

int front=0,rear=-1;
int q[size];
int i;
int query;
int item;

// enqueue

void enqueue(){
    if(rear==size-1){
        printf("queue is full");
    }
    else{
        q[++rear]=item;
        front++;        
    }
}

// dequeue

void dequeue(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        printf("element deleted is %d",q[front]);
        front++;
        }       
}


// display

void display(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        for(i=front;i<rear;i++){
            printf("%d\t",q[i]);
        }
    }
}

// main function

void main(){
    while(1)
    {
    printf("1.enqueue\n2.dequeue\n3.display");
    scanf("%d",&query);
    switch (query)
    {
    case 1:
        printf("enter the item");
        scanf("%d",&item);
        enqueue(item);
        break;
    
    case 2:
        dequeue();
        break;
    
    case 3:
        display();
        break;
    
    default:
        printf("invalid query");
        break;
        exit(0);
    }
    }
}