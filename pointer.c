#include<stdio.h>

    int sum ( int *x, int *y){

    *x=3;
   *y=6;
   int c=( *x + *y);
   return c;
}
int main(){
    int x=26;
    int y=27;
    int data = sum( &x, &y);
    printf("%d,data \n");
    printf("%d",x+y);
    return 0;
}


