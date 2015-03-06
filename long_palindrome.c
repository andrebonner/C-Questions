#include <stdio.h>

int palindrome_test(char[], int);
int palindrome_long(char[], int, char*);

char substr1[128]={'\0'};
char substr2[128]={'\0'};

int main(){
    int i=0,pal=0, len=0; // pal: defines palindrome, len: defines length of string 
    char c, str[256]={'\0'}; // str: string array
    char long_pal[256]={'\0'};
    // printf("%s \n", str);
    
    printf("Enter the string: ");
    do{
         c = getch();
         if(c=='\r') break;
         str[i] = c;
         i++;
         putchar(c);
    }while(c!='\r');
    putchar('\n');
    //scanf("%s",str);
    len = i;

    //printf("Length: %d \n", len);

    pal = palindrome_test(str,len);
    if(pal==1){
          printf("The string: %s is a palindrome\n", str);     
    }else{
          printf("The string: %s is not a palindrome\n", str);
          if(palindrome_long(str, len, long_pal)==1){
             printf("String : %s is the largest palindrome in : %s\n", long_pal, str);
          }
          else{
               printf("String: %s does not have any palindrome\n", str);
          }
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
    printf("%c : %c \n", str[x], str[y]);
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

int palindrome_long(char* str, int len, char* long_pal){
    //int y,x,i,mid;
//    int pal1=0, pal2=0, f, s;
//    
//    
//    if(len <= 1) return 0;
//    
//    if(len % 2 == 0){
//           mid = len / 2;
//    }else{
//          mid = (len / 2) + 1;
//    }
//    
//    printf("mid : %d \n", mid);
//    
//    y=0;
//    for(i=0; i<mid; i++){
//             substr1[i] = str[y];
//             y++;
//    }
//    printf("Substring 1: %s\n", substr1);
//    f = mid;
//    
//    
//    for(x=0; x<len; x++){
//             substr2[x] = str[y];
//             y++;
//    }
//    printf("Substring 2: %s\n", substr2);
//    s = y - mid;
//    
//    pal1 = palindrome_test(substr1,f);
//    pal2 = palindrome_test(substr2,s);
//    
//    if((pal1 == 1) || (pal2 == 1) && f>s){
//            printf("String: %s is a palindrome larger than : %s\n", substr1, substr2);
//            return 1;
//    }if((pal1 == 1) || (pal2 == 1) && f<=s){
//            printf("String: %s is a palindrome larger than : %s\n", substr2, substr1);
//            return 1;
//    }if(palindrome_long(substr1, len, long_pal)==0){
//          palindrome_long(substr2, len, long_pal);
//          return 0;
//    }if(palindrome_long(substr2, len, long_pal)==0){
//          palindrome_long(substr1, len, long_pal);
//          return 0;
//          
//    }

      int i, lem,pal=0;
      
      if(len<2){
                //printf("Len : %d\n", len);
         return 0;
      }else{
            for(i=0; i<(len-1); i++){
                     long_pal[i] = str[i];
                     //printf("long_pal[%i] : %c\n", i, long_pal[i]);
            }
            long_pal[i++] = '\0';
            
            //printf("long_pal : %s\n", long_pal);
            lem=len - 1;
            pal = palindrome_test(long_pal, lem);
            if(pal==0 && lem>1){
                 printf("Len : %d\n", lem);
                 palindrome_long(str, lem, long_pal);
            }else if(pal==0 && lem<=1){
                  printf("Len : %d\n", lem);
                 return 0;
            }
            
            return 1;
            
            
      }
}
