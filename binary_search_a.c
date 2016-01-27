#include <stdio.h>

#define MAX 10 // set the MAX to ten

int binary_search_a(int*, int, int); // define function binary_search_a 

int main(){
    int i,j, val, pos, array[MAX]; // define integer i, j, val, pos, array[MAX]
    
    for(i=0; i<MAX; i++){ // loop for each i++ to the length
             array[i] = j; // set array item to j
             j++; // increment j by one
    }
    
    puts("----- ARRAY ELEMENTS -----"); // put string title
    for(i=0; i<MAX; i++) // loop for each i++ to the length
             printf("%d ", array[i]); // print array items
    puts("\n");// put string newline
    printf("Enter the array value to find: "); // print prompt for search value
    scanf("%d", &val); // read search value
    
    pos = binary_search_a(array,val,MAX); // call binary_search_a takes Array, Search Value and Length returns Postion
    if(pos>0){ // is postion valid
              printf("Array value: %d was found at: %d\n", array[pos], pos + 1); // print array item and position
    }else // otherwise
         puts("Value not present!!"); // put string value not present
    
    system("pause"); // press the return key
    return 0; // return success from program
}

int binary_search_a(int* a, int val, int len){
    int first = 0;
    int last = len - 1;
    int middle = (first + last) / 2;
    
    while(first<=last){
          if(a[middle]<val){
             first = middle + 1;
          }else if(a[middle]==val){
                return middle;
          }else{
                last = middle - 1;
          }
          middle = (first + last) / 2;
    }
    if(first>last){
       return -1;
    }
}
