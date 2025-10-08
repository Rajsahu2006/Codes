#include<stdio.h>
int main(){
    int n;
    do {
        printf("enter a number : ");
        scanf("%d", &n); // <-- problem here
        printf("%d\n", n);

        if (n % 7 == 0) { //multiple of 7
            break;
        }

    } while (1);
    printf("thanks");

    return 0; 
}

