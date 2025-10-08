#include<stdio.h>
int main()
{
    int arr[6]={26,76,99,33,44,56};
    int max=arr[0];
    for(int i=1;i<=6;i++){
   if (arr [i]>max){
    max =arr[i];   
   } 
  
      
    }
    printf("%d",max);
}
