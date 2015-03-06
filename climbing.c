#include <stdio.h>

int climb(int, int);

int main(){
    int ways, num_steps;
    printf("Enter number of steps: ");
    scanf("%d",&num_steps);
    
    puts(".....Stepping.....");
    
    printf("%d \n", climb(num_steps,2));
    printf("Ways to climb: %d \n", ladder(num_steps));
    
    system("pause");
    return 0;
}

int climb(int steps, int i){
    int step_time;
    step_time = i;
    
    if(steps<=1){
             return 1;
    }else if(steps>i){
          printf("%d",i);
              return climb(steps-i, i);
    }
    
    return step_time;
}

int ladder(int steps){
    if(steps==0){
       return 0;
    }else if(steps==1){
       return 1;
    }else{
       return(ladder(steps-2)+ladder(steps-1)+2);
    } 
}
