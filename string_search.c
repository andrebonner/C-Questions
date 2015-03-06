#include <stdio.h>

int search_ch(char[], char);

int main(){
    char c;
    char str1[255];
    char str2[255] = {'\0'};
    int found;
    
    printf("Enter a string: ");
    scanf("%s", str1);
    
    printf("Search for a character: ");
    c = (char) getch();
    putchar(c);
    putchar('\n');
    
    found = search_ch(str1, c);
    
    if(found==1){
       printf("\nThe char: %c has been found in: %s\n", c, str1);
    }else{
          printf("\nThe char: %c has not been found in: %s\n", c, str1);
    }
    system("pause");
}

int search_ch(char str[], char c){
    int x, i=0, len=0, found;
    char h;
    len=sizeof(str);
    printf("%d",len);
    for(x=0; x<len; x++){
             h = str[i];
             printf("\n %c : %c \n", c, h);
             if(c == h){
                  found=1;
                  i++;
             }
             if(found==1){
                  str[x] = str[x+1];
                  str[x+1] = '\0';
             }
             i++;
    }
    if(found==1){
       return 1;
    }else{
       return 0;
    }
}
