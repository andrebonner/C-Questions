#include <stdio.h>
//#include <stdlib.>
#include <stdbool.h>

bool isPrime(int);

int main(){
    int num, i;
    
    printf("Enter a numbe till prime: ");
    scanf("%d",&num);
    
    printf("Printing prime number between 1 and %d\n", num);
    for(i=2; i<=num; i++){
             if(isPrime(i)){
               printf("%d ",i);
             }
    }
    puts("\n");
    system("pause");
    return 0;
}

bool isPrime(int i){
     int j;
     for(j=2; j<i; j++){
         if(i%j == 0){
                return false;
         }
     }
     return true;
}
