#include<stdio.h>
int main(){
 int arr [5]={5,4,3,2,1};
 int n=5;
 for(int i=0 ; i<n ; i++){
       for (int j = 0; j <n-1; j++){
            if (arr[j]>arr[j+1]){
             int temp = arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
   
             }
        }
    }

for (int i = 0; i <n; i++)
{
    printf("%d" , arr[i]);
}

    return 0;
}