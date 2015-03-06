#include <stdio.h>

int palindrome_test(char[], int);

int main(){
    int i=0,pal=0, len=0;  
    char c, str[256]={'\0'}; 
    
    
    
    printf("Enter the string: ");
    do{
         c = getch();
         if(c=='\r') break;
         str[i] = c;
         i++;
         putchar(c);
    }while(c!='\r');
    putchar('\n');
    
    len = i;

    

    pal = palindrome_test(str,len);
    if(pal==1){
          printf("The string: %s is a palindrome\n", str);     
    }else{
          printf("The string: %s is not a palindrome\n", str);
    }
    system("pause");
    return 0;  
}

int palindrome_test(char str[], int len){
    int matches,match=0, x, y; // matches: 
    y = len - 1 ;
    
    if(len % 2 == 0){
       matches = len/2;
    }else{
          matches = (len/2)+1; 
    }
    
    //printf("matches : %d \n", matches);
    for(x=0; x<matches; x++){
    //printf("%c : %c \n", str[x], str[y]);
        if(str[x]=='\0'){
           break;
        }
        while(str[y]=='\0'){
           //  printf("kl\n");            
           y--;
        }
        if(str[x]==str[y]){
           match++;
        }
              
      y--;      
    }
    //printf("match : %d \n", match);
    if(match==matches){
       return 1;
    }
    else{
         return 0;
    }
}
