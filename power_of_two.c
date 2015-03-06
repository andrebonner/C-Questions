#include <stdio.h>

int main(){
    int num, no=1, res;
    
    // get number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num>2){
        res = num % 2;
        printf("res: %d \n",res);
        printf("num: %d \n", num);
        system("pause");
         if(res==1)
            no=1;
         else
            num=num/2; 
    }
    
    if(no==1){
       puts("number is a power of 2");
    }else{
       puts("number is not a power of 2");
    }
    system("pause");
    return 0;
}
