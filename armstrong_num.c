#include <stdio.h>

int main(){
    int res=0, rem, orig, num; // defines res, rem, orig, num
    printf("Enter an integer: "); // print prompt 
    scanf("%d", &num); // read num
    
    orig=num; // set orig to num
    while(num!=0){ // loop while num is not zero
         rem = num % 10; // get the remainder of the division by ten
         res = res+rem*rem*rem; // calculate the result added to the remainder squared
         num/=10; // divide number by 10
    }
    
    if(orig==res) // is original equal to result
       printf("%d is an Armstrong number. \n", res); // print is an Armstrong number
    else // otherwise
           printf("%d is not an Armstrong number. \n", orig); // print is not an Armstrong number
           
    system("pause"); // press the return key
        return 0; // return success from program
}
