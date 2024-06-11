#include<stdio.h>
#include<limits.h>
int main(){
int arr[5]={5,4,3,2,1};
int n=5;

for(int i=0;i<n-1;i++){
    int x=INT_MAX;
     int mindx=-1;
    for(int j=i;j<=n-1;j++){
        if(x>arr[j]){
            x=arr[j];
            mindx=j;
        }

    }
// swap the min anf first element of unsorted part
 //swap mindx and i
 int temp=arr[mindx];
 arr[mindx]=arr[i];
 arr[i]=temp;
}
printf("\n");
for (int i = 0; i <n; i++)
{
    printf("%d" , arr[i]);
}

    return 0;
}