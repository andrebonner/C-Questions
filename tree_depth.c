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

int main(){
    int i, depth, val;
    struct  node* ptr;
    puts("------BINARY TREE-------");
    
    for(i=0; i<10; i++){
             printf("Enter a number: ");
             scanf("%d", &val);
             insert_node(val,&root);
    }
    ptr = search_tree(5, root);
    //printf("ptr->key_value : %d\n",ptr->key_value);
    depth = tree_depth(root);
    printf("Binary tree depth : %d\n", depth);
    
    destroy_tree(root);
    system("pause");
    return 0;
}
