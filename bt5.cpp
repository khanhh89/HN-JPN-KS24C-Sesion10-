#include<stdio.h>
int main(){
	int arr[7]={98,63,789,650,32,1,0};
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
	printf("\nDa sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}

    int selection, start = 0, end = size - 1, mid;
    printf("\nNhap vao gia tri can kiem tra: ");
    scanf("%d", &selection);

    while (start<=end) {
        mid = (start+end) / 2;
        if (arr[mid] == selection) {
            printf("\nPhan tu %d nam o vi tri %d.\n", selection, mid);
            return 0;
        } else if (arr[mid]>selection) {
            end = mid -1;
        } else {
            start = mid +1;
        }
    }
	printf("\nKhong tim thay phan tu %d trong mang.\n", selection);
    return 0;
}

