#include <stdio.h>

#define SIZE 5 // define size to five

struct my_struct{ // define struct my_struct
       int num;    // define integer num           
};

struct my_struct ele; // define my_struct ele

struct hash_table{ // define struct hashtable
       int max; // define maximuim size of the table
       int number_of_elements; // define current number of elements
       struct my_struct **elements; // define element struct
};

struct hash_table ht; // define hash_table ht

void bubble_a_sort(int[],int); // define function bubble_a_sort
int compare_array(int[], int[], int); // define function compare_array 

int main(){
    int i,n,len; // define integer i, n, len
    int array1[]={1,2,3,4,5}; // define int array1 initialise values
    int array2[]={2,3,1,0,5}; // define int array2 initialise values
    
    ht.max = SIZE; // set size of hash table to constant size variable
     
   // ele = ht->elements;
    
    printf(" : %d\n", ele.num);  // print element number  
    bubble_a_sort(array1,SIZE); // call function bubble_a_sort takes the array1 and SIZE
    bubble_a_sort(array2,SIZE); // call function bubble_a_sort takes the array2 and SIZE
    
    for(i=0; i<SIZE; i++) // loop for i to SIZE
             printf("array1[%d] : %d\n", i, array1[i]); // print array1 items
    
    for(i=0; i<SIZE; i++)
             printf("array2[%d] : %d\n", i, array2[i]); // print array2 items

    n = compare_array(array1,array2, SIZE); // call function compare_array takes the two arrays and the SIZE
    
    printf("Number missing from Array2 : %d\n", array1[n]); // print missing values from Array2
    system("pause"); // press return key to continue
    return 0; // return success
}

void bubble_a_sort(int arrayNum[],int len){
     int i, x,temp; // define integer i, x, temp
     
     
     for(x=0; x<len-1; x++){ // loop for len minus one
        for(i=0; i<len-1; i++){ // loop for len minus one
               
                 //printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n",x,arrayNum[x], i, arrayNum[i]);
                 //system("pause");
                 if(arrayNum[i] > arrayNum[i+1]){ // is arrayNum item @ position i greater than arrayNum item @ position i plus 1
                    temp = arrayNum[i]; // set temp to arrayNum item @ postion i
                    arrayNum[i] = arrayNum[i+1]; // set arrayNum item @ position i to arrayNum item @ position i plus 1
                    arrayNum[i+1] = temp; // set arrayNum item @ postion i plus 1 to temp
                   
                    //printf("\t!Swapped!\n");
                 }
        }
     }
     //printf("\t!sorted!\n");
}

int compare_array(int array1[], int array2[], int len){ 
    int n=-1,i,j; // define integer i,j, and n initialising to negative one
    
    for(j=0; j<len; j++){ // loop for len            
            for(i=0; i<len; i++){  // loop for len
                     printf("array1[%d] : %d ! array2[%d] : %d\n", i, array1[i], j, array2[j]); // print array1 item along with array2 item
                     if(array1[i] != array2[j]) n = array2[i]; // is array1 item not equal to array2 item set n to array2 item
            }
    }
    return n; // return n
}
