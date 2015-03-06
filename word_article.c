#include <stdio.h>
#include <string.h>

#define SIZE 300

int stroccur(const char*,const char*);

int main(){
    char str[SIZE/2];
    FILE* fd = NULL; 
    char buff[SIZE];
    
    int times;
    memset(buff,0,sizeof(buff));
    
    printf("Enter the string: ");
    gets(str);
    
    // Get Article from file
    fd = fopen("article.txt","r");
    if(fd != NULL){
       //fscanf(fd,"%s",buff);
       fgets(buff,SIZE,fd);
       fclose(fd);
    }
    
    puts(buff);
    times = stroccur(buff,str);
    printf("The string was found %d times \n",times);
    system("pause");
    return 0;
}

int stroccur(const char* str, const char* sub){
    int len = strlen(sub);
    if(len==0) return 0;
    int count = 0;
    for(str=strstr(str,sub); str; str=strstr(str+len,sub))
          ++count;
    return count;
}
