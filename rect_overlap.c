#include <stdio.h>
//#include <stdlib.h>
#include <stdbool.h>

typedef struct rectangle{
       int x;
       int y;
       int width;
       int height;
}rect;

bool valueInRange(int,int,int);
bool rectOverlap(rect, rect);

int main(){
    int xVal, yVal, w, h;
    rect A,B;
    
    printf("Rectangle 1 x: ");
    scanf("%d",&xVal);
    printf("Rectangle 1 y: ");
    scanf("%d",&yVal);
    printf("Rectangle 1 height: ");
    scanf("%d",&h);
    printf("Rectangle 1 width: ");
    scanf("%d",&h);
    A.x = xVal;
    A.y = yVal;
    A.height = h;
    A.width = w;
    
    printf("Rectangle 2 x: ");
    scanf("%d",&xVal);
    printf("Rectangle 2 y: ");
    scanf("%d",&yVal);
    printf("Rectangle 2 height: ");
    scanf("%d",&h);
    printf("Rectangle 2 width: ");
    scanf("%d",&h);
    B.x = xVal;
    B.y = yVal;
    B.height = h;
    B.width = w;
    
    if(rectOverlap(A,B)){
      printf("A and B rectangles overlap");
    }else{
      printf("A and B rectangles dont overlap");
    }
    puts("\n");
    system("pause");
    return 0;
}

bool valueInRange(int value,int min,int max){
     return (value >= min) && (value <= max);
}

bool rectOverlap(rect A, rect B){
     bool xOverlap = valueInRange(A.x,B.x, B.x + B.width) ||
      valueInRange(B.x,A.x, A.x + A.width);
      
     bool yOverlap = valueInRange(A.y,B.y, B.y + B.height) ||
      valueInRange(B.y,A.y, A.y + A.height);
     
     return xOverlap && yOverlap;
}
