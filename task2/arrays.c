#include<stdio.h>
int main(){
int count=0;
int arr[10]={0,1,2,3,4,5,6,7,8};
printf("size of arr is %d\n",sizeof(arr));
int elem = sizeof(arr)/sizeof(arr[4]);
for (int i=0;i<elem;i++)
{
if(arr[i]>=0){
	count++;
}
}
printf("elements in array %d",count);
return 0;

}
