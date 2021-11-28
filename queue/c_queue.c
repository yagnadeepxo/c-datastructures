#include<stdio.h>
#include<stdlib.h>
#define size 5

int counter=0,front=-1,rear=-1,item,q[size],i,query;

// enqueue
 void enqueue(){
    if(counter==size){
         printf("queue is full\n");
    }
    else{
        printf("enter the item to be inserted: \n");
        scanf("%d",&item);
        rear=(rear+1)%size;
        q[rear]=item;
        counter++;
    }
 }

 //dequeue
 void dequeue(){
     if(counter==0){
         printf("queue is empty");
     }
     else{
         front=(front+1)%size;
         printf("item deleted is %d",q[front]);
         counter--;
     }
 }

 // display
  void display(){
      if(counter==0){
          printf("queue is empty");
      }
      else{
          for(i=front;i<=rear;i++){
              printf("%d",q[front]);
          }
      }
  }

  // main function

  void main(){
      while(1){
        printf("\n1.enqueue\t2.dequeue\t2.display\n"); 
        scanf("%d",&query);
        switch (query)
        {
        case 1:
            enqueue();
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