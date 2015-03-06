#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct linked_list{
       int value;
       struct linked_list *next;
       
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

struct linked_list* find_middle(){
       int i, middle;
       struct linked_list *ptr = head;
       struct linked_list *tmp = NULL;
       
       if(len%2!=0){
             middle=len/2;
       }else{
             middle=len/2 + 1;
       }
       
       for(i=1; i<=middle; i++){
                tmp = ptr;
                ptr = ptr->next;
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
    
    for(i=0; i<9; i++){
             add_to_list(i,true);
    }
    printf("List length : %d\n", len);
    print_list();         
    ptr = find_middle();
    
    if(ptr != NULL){
           printf("Middle value is : %d\n",ptr->value);
    }
   
    print_list();
    system("pause");
    
    return 0;  
}
