#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 7

struct linked_list{
       int value;
       struct linked_list *next;
       struct linked_list *prev;
};

int len=0;
struct linked_list *head = NULL;
struct linked_list *curr = NULL;

struct linked_list* create_list(int value){
       
       struct linked_list* ptr = (struct linked_list*) malloc(sizeof(struct linked_list));
       
       if(NULL == ptr){
               return NULL;
       }
       ptr->value=value;
       ptr->next= NULL;
       
       head = curr = ptr;
       len++;
       
       return ptr;
}

struct linked_list* add_to_list(int value, bool add_to_end){
       if(NULL == head){
              return(create_list(value));
       }
       
       struct linked_list* ptr = (struct linked_list*) malloc(sizeof(struct linked_list));
       ptr->prev = curr;
       
       if(NULL == ptr){
               return NULL;
       }
       ptr->value = value;
       ptr->next = NULL;
       
       if(add_to_end){
           curr->next = ptr;
           curr = ptr;
       }else{
             ptr->next = head;
             head = ptr;
       }
       len++;
       
       return ptr;
} 

struct linked_list* search_in_list(int value, struct linked_list **prev){
       struct linked_list *ptr = head;
       struct linked_list *tmp = NULL;
       bool found = false;
       
       while(ptr != NULL){
                 if(ptr->value == value){
                        found = true;
                        break;
                 } else {
                        tmp = ptr;
                        ptr = ptr->next;
                 }
       }
       
       if(true == found){
               if(prev)
                     *prev = tmp;
               return ptr;
       }else{
             return NULL;
       }
}

struct linked_list* find_third(){
       int i, third;
       struct linked_list *ptr = curr;
       struct linked_list *tmp = NULL;
       
       third = len - 3;
       
       printf("third : %d \t len : %d\n", third, len);
       
       for(i=len; i>3; i--){
                //printf("prev[%d]->value : %d\n",i,ptr->value);
                tmp = curr; 
                ptr = ptr->prev;                
       }
       
       return ptr;
}

int delete_from_list(int value){
    
}

void print_list(void){
     int i;
     struct linked_list *ptr = head;
     
     printf("\n------------Printing list Start--------------\n");
     while(ptr != NULL){
               printf("\n [%d] \n", ptr->value);
               ptr = ptr->next;
     }
     printf("\n------------Printing list End--------------\n");
     
     return;
}

int main(void){
    
    int i, ret=0;
    struct linked_list *ptr = NULL;
    
    print_list();
    
    for(i=0; i<MAX; i++){
             add_to_list(i,true);
    }
    printf("List length : %d\n", len);
    print_list();         
    ptr = find_third();
    
    if(ptr != NULL){
           printf("Third value is : %d\n",ptr->value);
    }
   
    print_list();
    system("pause");
    
    return 0;  
}
