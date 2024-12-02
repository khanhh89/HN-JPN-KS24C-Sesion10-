#include<stdio.h>
int main(){
	int number[7]={98,63,789,65,32,1,0};
		int size=sizeof(number)/sizeof(int);
	printf("Mang chua sap xep la:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1-i;j++){
			if(number[j+1]<number[j]){
			int temp = number[j];
			number[j]=number[j+1];
			number[j+1]=temp;
			}
		}
	}
	printf("\nMang da sap xep la:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
		
}
return 0;
}
