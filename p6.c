#include<stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf(" %d", & age);
    if(age < 18){
        printf(" its  not adult");
    }
    else {
        printf(" its  adult");

    }
    
    return 0;
}