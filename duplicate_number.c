#include <stdio.h>

#define SIZE 5 // define SIZE as 5 - this should be a 100 numbers

void bubble_a_sort(int[],int); // define function bubble_a_sort
int duplicate_number(int[], int); // define function duplicate_number

int main(){
    int d, i,n, array_numbers[SIZE]; // define integer d, i, n, array_numbers
    
    puts("A hundred numbers"); // puts string A hundred numbers
    for(i=0; i<SIZE; i++){ // loop for SIZE
        printf("Enter a number: "); // print prompt
        scanf("%d",&n); // read n
        array_numbers[i]=n; // set array_number item to n
    }
    
    bubble_a_sort(array_numbers, SIZE); // call function bubble_a_sort takes array_numbers, and SIZE
    
    for(i=0; i<SIZE; i++){ // loop for SIZE
      printf("ArrayNumber[%d] : %d\n",i,array_numbers[i]); // print arraynumber item
    }
   
    d = duplicate_number(array_numbers, SIZE); // call function duplicate_number takes array_numbers, and SIZE
    
    printf("Duplicate number is: %d\n", d); // print duplicate number returned above
    
    system("pause"); // press return key to continue
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


int duplicate_number(int arrayNum[], int len){
    int i,j=0; // define integer i, j initialise to zero
    for(i=0; i<len; i++){ // loop for len
             j++; // inrement j by one
             //printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n", i, arrayNum[i], j, arrayNum[j]);
             if(arrayNum[i]==arrayNum[j]) return arrayNum[i]; // is arrayNum item @ i equal to arrayNum item @ j then return arrayNum item @ i
    }
    return -1; // return negative one
}
