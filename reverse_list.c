#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 7

struct node{
       int value;
       struct node *next;
};

int len=0;
struct node *start = NULL;
struct node *curr = NULL;

struct node* create_list(int value){
       
       struct node* ptr = (struct node*) malloc(sizeof(struct node));
       
       if(NULL == ptr){
               return NULL;
       }
       ptr->value=value;
       ptr->next= NULL;

       
       start = curr = ptr;
       len++;
       
       return ptr;
}

struct node* add_to_list(int value, bool add_to_end){
       if(NULL == start){
              return(create_list(value));
       }
       
       struct node* ptr = (struct node*) malloc(sizeof(struct node));
              
       if(NULL == ptr){
               return NULL;
       }
       ptr->value = value;
       ptr->next = NULL;
       
       if(add_to_end){
           curr->next = ptr;
           curr = ptr;
       }else{
             ptr->next = start;
             start = ptr;
       }
       len++;
       
       return ptr;
} 

struct node* reverse_loop(struct node* ptr){
     struct node* cursor = NULL;
     struct node* nex;
     
     while(ptr){
                  nex = ptr->next;
                  ptr->next = cursor;
                  cursor = ptr;
                  ptr = nex;
     }
     return cursor;
}

void print_list(void){
     int i;
     struct node *ptr = start;
     
     printf("\n------------Printing list Start--------------\n");
     while(ptr != NULL){
               printf("\n [%d] \n", ptr->value);
               ptr = ptr->next;
     }
     printf("\n------------Printing list End--------------\n");
     
     return;
}

int main(){
    int i;
    print_list();
    
    for(i=10; i>MAX; i--)
              add_to_list(i,true);
        
    print_list();
    start = reverse_loop(start);
    print_list();
    system("pause");
    return 0;    
}
