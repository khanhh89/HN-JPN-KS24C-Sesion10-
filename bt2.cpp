#include<stdio.h>
int main(){
	int arr[7]={98,63,789,65,32,1,0};
	int size=sizeof(arr)/sizeof(int);
	printf("Chua sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0; i<size;i++){
		int min=arr[i];
		for(int j=i+1;j<size;j++){
			if(arr[j]<min){
				min= arr[j]; 
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
	printf("\nDa xap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
}
}
