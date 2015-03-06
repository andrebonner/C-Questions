#include <stdio.h>

void permute_iter(char*, int);
void permute_recurse(char*, int, int);

int main(){
    int i=0,x=0,len;
    char c, str[10];
    
    printf("Enter the string: ");
    do{
         c = getch();
         if(c=='\r') break;
         if(c=='\b'){
            putchar('\0');
            i--;
         }
         str[i] = c;
         i++;
         putchar(c);
    }while(c!='\r');
    putchar('\n');
    //scanf("%s",str);
    len = i;
 
    printf("Printing recurively: \n");
    permute_recurse(str, len, x);    
 
    printf("Printing iteratively: \n");
    permute_iter(str, len);
    
    system("pause");
}

void permute_iter(char* str, int len){
     int x;
     
     //printf(" Length: %d \n",len);
     for(x=0; x<len; x++){
        putchar(str[x]);
        putchar('\n');
     }
}

void permute_recurse(char* str, int len, int x){
     //printf(" Length: %d \n",len);
     if(len<=x){
       return;
     }else{
           putchar(str[x]);
           putchar('\n');
           permute_recurse(str,len,x+1);
     }
}
