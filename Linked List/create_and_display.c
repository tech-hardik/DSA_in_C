//
//  create_and_display.c
//  DSA_in_C
//
//  Created by HARDIK SHARMA on 25/05/24.
//

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for (i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


//focus more on displaying not creation of linked list
void Display(struct Node *p){
    while (p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}



int main(void){
    
    int A[] = {3,5,7,10,15};
    create(A,5);
    Display(first);
    
    printf("\n \n");
    return 0;
}
 
