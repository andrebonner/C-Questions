#include <stdio.h>

struct node{
       int key_value;
       struct node* left;
       struct node* right;
};

struct node* root = 0;

void destroy_tree(struct node* leaf){
     if(leaf != 0){
             destroy_tree(leaf->left);
             destroy_tree(leaf->right);
             free(leaf);
     }
}

void insert_node(int key, struct node **leaf){
     if(*leaf == NULL){
              *leaf = (struct node*) malloc(sizeof(struct node));
              (*leaf)->key_value = key;
              (*leaf)->left = 0;
              (*leaf)->right = 0;
     }else if(key < (*leaf)->key_value){
           //puts("\t key left\n");
           insert_node(key, &(*leaf)->left);
     }else if(key > (*leaf)->key_value){
           //puts("\t key right\n");
           insert_node(key, &(*leaf)->right);
     }
}

struct node* search_tree(int key, struct node *leaf){
       if(leaf != NULL){
               if(key==leaf->key_value){
                     return leaf;
               }else if(key<leaf->key_value){
                     //puts("\t search left\n");
                     return search_tree(key, leaf->left);
               }else{
                     //puts("\t search right\n");
                     return search_tree(key, leaf->right);
               }
       }
}

int tree_depth(struct node* ptr){
    int ldepth,rdepth;
    if(ptr==NULL){
        return 0;
    }else{
          ldepth = tree_depth(ptr->left);
          rdepth = tree_depth(ptr->right);
          if(ldepth>rdepth){
                   return ldepth + 1;
          }else{
                return rdepth + 1;
          }
    }
}

void print_inorder(struct node* ptr){
     if(ptr==NULL){
            return;              
     }else{
     // go to extreme left
        print_inorder(ptr->left);
     // go to root
        printf("%d\n",ptr->key_value);
     // go to extreme right
        print_inorder(ptr->right);
     }
}


void print_leaf(struct node* ptr, int path[], int pathLen){
     int i;
     if(ptr!=NULL){
          path[pathLen] = ptr->key_value;
          pathLen++;
          
          if(ptr->left==NULL && ptr->right==NULL){
               // printArray
               for(i=0; i<pathLen; i++)
                        printf("%d", path[i]);
               printf("\n");
          }else{
                print_leaf(ptr->left,path,pathLen);
                print_leaf(ptr->right,path,pathLen);
          }                            
     }else{
          return;
     }
}

void print_leaves(struct node* ptr){
     int path[1000];
     print_leaf(ptr,path,0);
}

int main(){
    int i, val;
    struct  node* ptr;
    puts("------BINARY TREE-------");
    
    for(i=0; i<10; i++){
             printf("Enter a number: ");
             scanf("%d", &val);
             insert_node(val,&root);
    }
    ptr = search_tree(5, root);
    //printf("ptr->key_value : %d\n",ptr->key_value);
    print_leaves(root);
    
    destroy_tree(root);
    system("pause");
    return 0;
}
