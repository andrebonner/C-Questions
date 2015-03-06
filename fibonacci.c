#include <stdio.h>

int fibonacci(int);

int main(){
    int i, num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("Fibonacci Series %d \n", num);
    for(i=1; i<=num; i++){
             printf("%d ", fibonacci2(i));
    }
    
    puts("\n");
    
    system("pause");
    
    return 0;
}

int fibonacci(int num){
    if(num==1 || num==2){
              return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}

int fibonacci2(int num){
    int i, fibo1=1, fibo2=1, fibonacci=1;
    if(num==1 || num==2){
              return 1;
    }
    for(i=3; i<=num; i++){
             fibonacci = fibo1 + fibo2;
             fibo1=fibo2;
             fibo2=fibonacci;
    }
    return fibonacci;
}
