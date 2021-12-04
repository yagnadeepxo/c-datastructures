// circular linked list;

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *root = NULL;

void insert_front(){
    struct node *temp;
    struct node *t;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert");
    scanf("%d",&temp->data);
    if(root==NULL){
        root=temp;
        temp->link=temp;
    }
    else{
        t=root;
        while(t->link!=root){
            t=t->link;
        }
        temp->link=root;
        root=temp;
        t->link=temp;
    }
}

void insert_rear(){
    struct node *temp;
    struct node *t;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert");
    scanf("%d",&temp->data);
    if(root==NULL){
        root=temp;
        temp->link=temp;
    }
    else{
        t=root;
        while(t->link!=root){
            t=t->link;
        }
        t->link=temp;
        temp->link=root;
    }
}

void display(){
    struct node *t;
    if(root=NULL){
        printf("list is empty");
    }
    else{
        t=root;
        while(t->link!=root){
            printf("%d->\t",t->data);
            t=t->link;
        }
        printf("%d->\t",t->data);
    }
}

void delete_front(){
    struct node *temp,*t;
    if(root=NULL){
        printf("list is empty");
    }
    else if(root->link==root){
        t=root;
        root=NULL;
        free(t);
    }
    else{
        t=root;
        temp=root;
        while(temp->link!=root){
            temp=temp->link;
        }
        root=t->link;
        t->link=NULL;
        temp->link=root;
        free(t);
    }
}

void delete_rear(){
    struct node *temp,*t;
    if(root=NULL){
        printf("list is empty");
    }
    else if(root->link==root){
        t=root;
        root=NULL;
        free(t);
    }
    else{
        t=root;
        while(t->link!=root){
            temp=t;
            t=t->link;
        }
        temp->link=root;
        t->link=NULL;
        free(t);
    }
}

void delete_specified(){
    struct node *temp, *t;
    int pos;
    printf("Enter position\n");
    scanf("%d",&pos);
    int c=1;
    temp=root;
    t=root;
    while(c<pos){
        temp=t;
        t=t->link;
        c++;
    }
    temp=t->link;
    t->link=NULL;
    free(t);
}

void main(){
    // using swith case call all the functions
    
}

