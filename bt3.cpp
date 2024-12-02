#include<stdio.h>
int main(){
	int number[5]={9,1,99999,65,200};
	int sizeArr=sizeof(number)/sizeof(int);
	printf("Truoc khi duoc sap xep:");
	for(int i=0;i<sizeArr;i++){
		printf("%d\t",number[i]);
	}
	for(int i=0;i<sizeArr;i++){
		int key=number[i];
		int j=i-1;
		while(j>=0 && key<number[j]){
			number[j+1]=number[j];
			j--;
		}
		number[j+1]=key;
	}
	printf("\n");
	printf(" khi duoc sap xep:");
	for(int i=0;i<sizeArr;i++){
		printf("%d\t",number[i]);
}
}
