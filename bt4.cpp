#include<stdio.h>
int main(){
	int number[5]={1,100,65,36,946};
	int size = sizeof(number)/sizeof(int);
	printf("Day la mang chua sap xep.\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	for(int i=0;i<size;i++){
		int min=number[i];
		for(int j=i+1;j<size;j++){
			if(number[i]<min){
				min=number[j];
				number[j+1]=number[j];
				number[j]=min;
			}
		}
		
	}
	printf("Day la mang da sap xep.\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	
}
return 0;
}
