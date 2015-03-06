#include <stdio.h>

#define SIZE 5 // this should be a 100 numbers

void bubble_a_sort(int[],int);
int duplicate_number(int[], int);

int main(){
    int d, i,n, array_numbers[SIZE];
    
    puts("A hundred numbers");
    for(i=0; i<SIZE; i++){
        printf("Enter a number: ");
        scanf("%d",&n);
        array_numbers[i]=n;
    }
    
    bubble_a_sort(array_numbers, SIZE);
    
    for(i=0; i<SIZE; i++){
      printf("ArrayNumber[%d] : %d\n",i,array_numbers[i]);
    }
   
    d = duplicate_number(array_numbers, SIZE);
    
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


int duplicate_number(int arrayNum[], int len){
    int i,j=0;
    for(i=0; i<len; i++){
             j++;
             //printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n", i, arrayNum[i], j, arrayNum[j]);
             if(arrayNum[i]==arrayNum[j]) return arrayNum[i];
    }
    return -1;
}
