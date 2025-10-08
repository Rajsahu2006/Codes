#include<stdio.h>
int main(){
 int i,j,k;
 for ( i = 3; i <= 8; i++ ){
    for ( k = 8; k<=8 -i ; k++){
        printf("*");
    }
    for ( j = 3; j <= i ; j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}   


