#include <stdio.h>

int climb(int, int); // define function climb
int ladder(int steps); // define function ladder

int main(){
    int ways, num_steps; // define integer ways, and num_steps
    printf("Enter number of steps: "); // print prompt for steps
    scanf("%d",&num_steps); // read num_steps
    
    puts(".....Stepping....."); // put string Stepping
    
    printf("%d \n", climb(num_steps,2)); // print the function climb return value it takes number of steps and time between steps 
    printf("Ways to climb: %d \n", ladder(num_steps)); // print the function ladder using the number of steps
    
    system("pause"); // press return to continue;
    return 0; // return success 
}

int climb(int steps, int i){
    int step_time; // define integer step_time
    step_time = i; // set i to step_time
    
    if(steps<=1){ //is steps less than or equal to one
             return 1; // return one
    }else if(steps>i){ // is steps greater than i
          printf("%d",i); // print i
              return climb(steps-i, i); // return climb which takes step minus i and i
    }
    
    return step_time; // return step_time
}

int ladder(int steps){
    if(steps==0){ // is the steps equal to zero
       return 0; // return zero
    }else if(steps==1){ // is the steps equal to one
       return 1; // return one
    }else{ // otherwise
       return(ladder(steps-2)+ladder(steps-1)+2); // return sum of ladder takes steps minus 2 plus ladder takes steps minus one plus two
    } 
}
