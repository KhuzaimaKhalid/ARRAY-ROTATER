#include<stdio.h>

void reverse(int arr[], int s, int e);

int main()
{
	printf("\t ARRAY ROTATER \n");
  int n,k;
  printf("\nEnter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++){
  	printf("\nEnter the no # %d = ",i+1);
  	scanf("%d", &arr[i]);
  }
  printf("\nEnter no of times of rotation = ");
  scanf("%d", &k);
  k = k % n;
  reverse(arr,0,n-1);	
  reverse(arr,0,k-1);	
  reverse(arr,k,n-1);	
	
  for(int i = 0; i < n; i++){
  	printf("%d \n", arr[i]);
  }	
	
	return 0;
}
void reverse(int arr[], int s, int e){
	for(int i = s, j = e; i < j; i++,j--){
	int	temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
