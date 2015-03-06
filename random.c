#include <stdio.h>

int RandomNumbers(int,int);

int main(){
    int val1, val2, min, max;
    printf("Enter a number: ");
    scanf("%d", &val1);
    
    printf("Enter a number: ");
    scanf("%d", &val2);
    
    if(val1>val2){
       max=val1;
       min=val2;
    }else{
       max=val2;
       min=val1;
    }
    
    puts("-Random Number-");
    printf("Min: %d Max: %d\nRandom Number: %d\n", min, max,RandomNumbers(min,max));
    system("pause");
    return 0;
}

int RandomNumbers(int min_num,int max_num){ 
           int result=0,low_num=0,hi_num=0;
            if(min_num<max_num)
            {
                low_num=min_num;
                hi_num=max_num+1; // this is done to include max_num in output.
            }else{
                low_num=max_num+1;// this is done to include max_num in output.
                hi_num=min_num;
            }
            srand(time(NULL));
            result = (rand()%(hi_num-low_num))+low_num;
            return result;
}
