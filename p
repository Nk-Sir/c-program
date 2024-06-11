#include<stdio.h>
int main(){
printf("Enter the your  mark :  ");
int arr[5];
for (int i = 0; i <5; i++)
{
    scanf("%d" , &arr[i]);
}
float sum=0;
for (int i = 0; i < 5; i++)
{
    sum = sum + arr[i];
}
printf(" this is your perecntage : %f" , sum/5);



    return 0;
}
