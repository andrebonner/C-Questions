#include <stdio.h>

#define SIZE 5 // this should be a 100 numbers

void a_sort(int[],int,int);
int missing_number(int[], int);

int main(){
    int m, i,n, array_numbers[SIZE];
    
    puts("A hundred numbers");
    for(i=0; i<SIZE; i++){
        printf("Enter a number: ");
        scanf("%d",&n);
        array_numbers[i]=n;
    }
    
    a_sort(array_numbers, 0,SIZE);
    
//   for(i=0; i<SIZE; i++){
//        printf("ArrayNumber[%d] : %d\n",i,array_numbers[i]);
//   }
   
   m = missing_number(array_numbers, SIZE);
    
    printf("Missing number is: %d\n", m);
    
    system("pause");
}

void a_sort(int arrayNum[], int i, int len){
      int temp;
      
      if(i<len){
         len--;
         //printf("arrayNum[%d] : %d ! arrayNum[%d] : %d\n", i, arrayNum[i], len, arrayNum[len]);
         if(arrayNum[i] > arrayNum[len]){
               temp = arrayNum[i];
               arrayNum[i] = arrayNum[len];
               arrayNum[len] = temp;
         }
         i++;
         //printf("Iter : %d\n",i);
         a_sort(arrayNum, i, len);
      }
}

int missing_number(int arrayNum[], int len){
     int i,m;
     
     for(i=0; i<len; i++){
              if(arrayNum[i]!=i) return i;
     }
     return -1;
}
