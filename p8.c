#include<stdio.h>
int main()
{
    char ch;
    printf(" enter character :");
    scanf("%c",& ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE");
    }
    else if(ch >= 'a' && ch <= 'z');{
    printf("LOWER CASE ");
    }
    else {
        printf("NOT ENGLISH LATER");
    }

    return 0;
}