#include <stdio.h>

#define MAX 10

int binary_search_a(int*, int, int);

int main(){
    int i,j, val, pos, array[MAX];
    
    for(i=0; i<MAX; i++){
             array[i] = j;
             j++;
    }
    
    puts("----- ARRAY ELEMENTS -----");
    for(i=0; i<MAX; i++)
             printf("%d ", array[i]);
    puts("\n");
    printf("Enter the array value to find: ");
    scanf("%d", &val);
    
    pos = binary_search_a(array,val,MAX);
    if(pos>0){
              printf("Array value: %d was found at: %d\n", array[pos], pos + 1);
    }else
         puts("Value not present!!");
    
    system("pause");
    return 0;
}

int binary_search_a(int* a, int val, int len){
    int first = 0;
    int last = len - 1;
    int middle = (first + last) / 2;
    
    while(first<=last){
          if(a[middle]<val){
             first = middle + 1;
          }else if(a[middle]==val){
                return middle;
          }else{
                last = middle - 1;
          }
          middle = (first + last) / 2;
    }
    if(first>last){
       return -1;
    }
}
