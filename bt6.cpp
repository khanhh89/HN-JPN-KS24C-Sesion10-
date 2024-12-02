#include<stdio.h>
int main(){
	int number[6]={6,78,96,100,852,96};
	int size=sizeof(number)/sizeof(int);
	printf("mang chua sap xep la:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	for(int i=0; i<size;i++){
		int min=number[i];
		for(int j=i+1;j<size;j++){
			if(number[j]<min){
				min= number[j]; 
				number[j]=number[i];
				number[i]=min;
			}
 		}
	}
	printf("\nmang da sap xep la:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	int selection, start = 0, end = size - 1, mid;
    printf("\nNhap vao gia tri can kiem tra: ");
    scanf("%d", &selection);

    while (start<=end) {
        mid = (start+end) / 2;
        if (number[mid] == selection) {
            printf("\nPhan tu %d nam o vi tri %d.\n", selection, mid);
            return 0;
        } else if (number[mid]>selection) {
            end = mid -1;
        } else {
            start = mid +1;
        }
    }
	printf("\nKhong tim thay phan tu %d trong mang.\n", selection);

return 0;
}
