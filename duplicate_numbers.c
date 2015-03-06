#include <stdio.h>

#define SIZE 10 // this should be a 100 numbers

struct my_struct{
       int occ;
       int num;       
};

struct hash_table{
       int max; // maximuim size of the table
       int number_of_elements; // current number of elements
       struct my_struct **elements; // element struct
};

void bubble_a_sort(int[],int);
int duplicate_number2(int[], int);

int main(){
    int d, i,n, array_numbers[SIZE];
    
    puts("A hundred numbers");
    for(i=0; i<SIZE; i++){
        printf("Enter a number: ");
        scanf("%d",&n);
        array_numbers[i]=n;
    }
    
    bubble_a_sort(array_numbers,SIZE);
    
    //for(i=0; i<SIZE; i++)
      //printf("ArrayNumber[%d] : %d\n",i,array_numbers[i]);
    
   
    d = duplicate_number2(array_numbers, SIZE);
    
    printf("Duplicate number is: %d\n", d);
    
    system("pause");
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
