#include <stdio.h>

int main(){
    int res=0, rem, orig, num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    orig=num;
    while(num!=0){
         rem = num % 10;
         res = res+rem*rem*rem;
         num/=10;
    }
    
    if(orig==res)
       printf("%d is an Armstrong number. \n", res);
    else
           printf("%d is not an Armstrong number. \n", orig);
           
    system("pause");
    return 0;
}
