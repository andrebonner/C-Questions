#include <stdio.h>

#define SIZE 6

void bubble_a_sort(int[],int);
int second_largest(int[],int);

int main(){
    int j, n, arrayNum[SIZE]={0,2,1,3,5,4};
    // sort
    bubble_a_sort(arrayNum, SIZE);
    for(j=0; j<SIZE; j++) 
             printf("arrayNum[%d] : %d\n",j,arrayNum[j]);
    // second largest
    n = second_largest(arrayNum, SIZE);
    printf("The second largest number %d \n", n);
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

int second_largest(int arrayNum[], int len){
    int i,n;
    
    for(i=len-1; i>=0; i--){
               printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n",  i, arrayNum[i], i-1, arrayNum[i-1]);
               if(arrayNum[i] > arrayNum[i-1]){
                              n = arrayNum[i-1];
                              break;
               }
    }
    return n;
}
