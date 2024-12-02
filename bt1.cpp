#include<stdio.h>
int main(){
	int numbers[6]={3,9,100,25,6,8};
	int size=sizeof(numbers)/sizeof(int);
	int element,found=0;
	printf("Nhap 1 gia tri de kiem tra xem co khong: ");
	scanf("%d",&element);
	printf("Day la phan tu trong mang:");
	for(int i=0;i<size;i++){
	printf("%d\t",numbers[i]);
	}
	for(int i=0;i<size;i++){
		if(numbers[i]==element){
			printf("\nPhan tu %d co nam trong mang va nam o vi tri %d.\n",element,i);
			found=1;
		}
	}
	if(!found){
		printf("\nKhong ton tai phan tu trong mang\n",element);
	}
	return 0;
}
