#include <stdio.h>

#define SIZE 5 // this 5 numbers

struct my_struct{
       int num;              
};

struct my_struct ele;

struct hash_table{
       int max; // maximuim size of the table
       int number_of_elements; // current number of elements
       struct my_struct **elements; // element struct
};

struct hash_table ht;

void bubble_a_sort(int[],int);
int compare_array(int[], int[], int);

int main(){
    int i,n,len;
    int array1[]={1,2,3,4,5};
    int array2[]={2,3,1,0,5};
    
    ht.max = SIZE;
     
   // ele = ht->elements;
    
    printf(" : %d\n", ele.num);    
    bubble_a_sort(array1,SIZE);
    bubble_a_sort(array2,SIZE);
    
    for(i=0; i<SIZE; i++)
             printf("array1[%d] : %d\n", i, array1[i]);
    
    for(i=0; i<SIZE; i++)
             printf("array2[%d] : %d\n", i, array2[i]);

    n = compare_array(array1,array2, SIZE);
    
    printf("Number missing from Array2 : %d\n", array1[n]);
    system("pause");
    return 0;
}

void bubble_a_sort(int arrayNum[],int len){
     int i, x,temp;
     
     
     for(x=0; x<len-1; x++){
        for(i=0; i<len-1; i++){
               
                 //printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n",x,arrayNum[x], i, arrayNum[i]);
                 //system("pause");
                 if(arrayNum[i] > arrayNum[i+1]){
                    temp = arrayNum[i];
                    arrayNum[i] = arrayNum[i+1];
                    arrayNum[i+1] = temp;
                   
                    //printf("\t!Swapped!\n");
                 }
        }
     }
     //printf("\t!sorted!\n");
}

int compare_array(int array1[], int array2[], int len){
    int n=-1,i,j;
    
    for(j=0; j<len; j++){             
            for(i=0; i<len; i++){ 
                     printf("array1[%d] : %d ! array2[%d] : %d\n", i, array1[i], j, array2[j]);
                     if(array1[i] != array2[j]) n = array2[i];
            }
    }
    return n; 
}
