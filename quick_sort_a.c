#include <stdio.h>

#define MAX 10

int partition_a(int*, int, int);
void quick_sort(int*, int, int);

int main(){
    int i,array[MAX] = {8,0,2,6,3,9,5,1,4,7};
    
    puts("Array before Sort\n");
    
    for(i=0; i<MAX; i++)
             printf("%d ", array[i]);
    
    puts("\n");
    
    quick_sort(array,0,MAX-1);
    puts("Array after Sort\n");
    
	for (i=0; i<MAX; i++)
		printf("%d ", array[i]);
	
    puts("\n");	
    system("pause");
    return 0;
}

int partition_a(int* a, int start, int end){
    int temp;
    int pivot = start;
    int i = start + 1;
    int j = end;
    
    while(i<=j){
         while(a[i]<=a[pivot])
               i++;
         while(a[j]>a[pivot])
               j--;
         
         if(i<=j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
         }
    }
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;
    
    return j;
}

void quick_sort(int* a, int start, int end){
     int pivot;
     
     if(start>=end){
        return;
     }else{
           pivot = partition_a(a,start,end);
           quick_sort(a,start,pivot - 1);
           quick_sort(a, pivot + 1, end); 
     }
}
