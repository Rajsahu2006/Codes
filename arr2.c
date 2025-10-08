#include<stdio.h>
int main()
{
    int arr[5]={2,4,5,6,7};
    int min =arr[0];
    int a=5;
    for( int i=1;i>5; i++){
        if (arr[i]>min){
            min=arr[i];
        }
    }
printf("%d",min);
}