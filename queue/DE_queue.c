#include<stdio.h>
#include<stdlib.h>
#define size 10

int front=-1,rear=-1,query,i,item,q[size];

void f_insert(){
    if(front==0){
        printf("space not available ");
    }
    else if(front>0){
        printf("enter the item to be added: ");
        scanf("%d",&item);
        q[--front]=item;
    }
    else{
        printf("enter the item to be added: ");
        scanf("%d",&item);
        q[++front]=item;
        ++rear;
    }
}

void r_insert(){
    if(rear==size-1){
        printf("queue is full");
    }
    else{
        printf("enter the item to be added: ");
        scanf("%d",&item);
        q[++rear]=item;
    }
    if(front==-1){
        ++front;
    }
}

void f_delete(){
    if(front==-1){
        printf("queue is empty");
    }
    else if(front==rear){
        printf("the item deleted is %d",q[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("item deleted is %d",q[front]);
        front++;
    }
}

void r_delete(){
    if(rear == -1)
        printf("Queue is empty.\n");
    else if(front == rear){
        printf("The deleted element is: %d",q[rear]);
        front = -1;
        rear = -1;
    }
    else{
        printf("The deleted element is: %d",q[rear]);
        rear--;
    }
        
}

void display(){
    if(rear == -1)
        printf("Queue is empty\n");
    else{
        printf("Elements of the queue are: \n");
        for(i = front; i <= rear; i++)
            printf("%d\t",q[i]);
    }
}

// main()

void main(){   
    while(1){
        printf("Double Ended Queue Operations: \n");
        printf("1. Insert Elements to the front end.\n");
        printf("2. Delete Elements from the front end.\n");
        printf("3. Insert Elements to the rear end.\n");
        printf("4. Delete Elements from the rear end.\n");
        printf("5. Display the Elements of the Queue.\n");
        printf("6. Exit.\n");
        scanf("%d",&query);
        switch(query){
            case 1:   f_insert();
                break;
            case 2:   f_delete();
                break;
            case 3:   r_insert();
                break;
            case 4:   r_delete();
                break;
            case 5:   display();
                break;
            case 6:   exit(0);
                break;
            default:    printf("Wrong input. Please try again.\n");
            
        }
    }
}








