#include <stdio.h>

void getArr(int a,int b, int arr[100][100]) {
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			printf("Moi ban nhap gia tri cho arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

	void printArr (int rows, int cols , int arr[100][100] ) {
	
	int i,j; 
	for(i=0;i<rows;i++) {
		for (j=0;j<cols;j++) {
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	     }
   }


int main()
{
	int rows,cols;
	int arr[100][100];
	printf("Moi ban nhap so hang:");
	scanf("%d",&rows);
	printf("Moi ban nhap so cot:");
	scanf("%d",&cols);
	getArr(rows,cols,arr);
	
	printArr(rows , cols , arr) ;
	return 0;

 }
