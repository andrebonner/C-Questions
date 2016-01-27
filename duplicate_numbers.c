#include <stdio.h>

#define SIZE 10 // this should be a 100 numbers

struct my_struct{ // define struct my_struct
       int occ; // define integer occ
       int num; // define integer num      
};

struct hash_table{ // define struct hash_table
       int max; // define integer max - maximuim size of the table
       int number_of_elements; // define int number_of_elements - current number of elements
       struct my_struct **elements; // define my_struct
};

void bubble_a_sort(int[],int); // define function bubble_a_sort
int duplicate_number2(int[], int); // define function duplicate_number2

int main(){
    int d, i,n, array_numbers[SIZE]; // define integer d, i, n, array_numbers[SIZE]
    
    puts("A hundred numbers"); // put string hundred numbers
    for(i=0; i<SIZE; i++){ // loop for SIZE
        printf("Enter a number: "); // print prompt
        scanf("%d",&n); // read n
        array_numbers[i]=n; // set array_number item equal to n
    }
    
    bubble_a_sort(array_numbers,SIZE); // call function bubble_a_sort takes array and SIZE
    
    //for(i=0; i<SIZE; i++)
      //printf("ArrayNumber[%d] : %d\n",i,array_numbers[i]);
    
   
    d = duplicate_number2(array_numbers, SIZE); // call function duplicate_number2 takes array and SIZE return d
    
    printf("Duplicate number is: %d\n", d); // print duplicate number
    
    system("pause"); // press the return key to continue
}

void bubble_a_sort(int arrayNum[],int len){
     int i, x,temp; // define integer i, x, temp
     
     
     for(x=0; x<len-1; x++){ // loop for len minus 1
        for(i=0; i<len-1; i++){ // loop for len minus 1
               
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


int duplicate_number2(int arrayNum[], int len){
    // if current array element equal search array element
    //      occurance increment
    // else continue
    
    int i,j=0,x=0, y, arrayOcc[SIZE/2],occArr[SIZE/2];
    
    for(y=0; y<SIZE/2; y++) occArr[y]=1;
    
    for(y=0; y<SIZE/2; y++) arrayOcc[y]=0;
    
    for(i=0; i<len; i++){
             
             printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n", i, arrayNum[i], i+1, arrayNum[i+1]);
             if(arrayNum[i]==arrayNum[i+1]){
                        occArr[x]++;
                        //printf("Occur array : %d\n", occArr[x]);
                        if(arrayOcc[x]!=arrayNum[i]){
                                     arrayOcc[x] = arrayNum[i];
                                     x++;
                                     
                        }                        
             }else{
                   j=0;
             }
    }
    for(y=0; y<x; y++)
             printf("Number: %d Occurs %d times\n", arrayOcc[y], occArr[y]);
    return -1;
}
