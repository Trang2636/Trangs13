#include<stdio.h>


void displayMenu(){
	printf("\n==MENU==\n");
	printf("1. Nhap gia tri cac phan tu cua mang. \n");
	printf("2. In gia tri cac phan tu cua mang theo ma tran.  \n");
	printf("3. In ra cac phan tu o goc theo ma tran. \n");
	printf("4. In ra cac phan tu nam tren duong bien theo ma tran.\n");
	printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran. \n");
	printf("6. In ra cac phan tu la so nguyen to theo ma tran. \n");
	printf("7. Thoat. \n");
    printf("Nhap vao lua chon cua ban: ");
	
}

void getArr(int a ,int b , int arr[100][100] ){
	int i , j ; 
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]); 
		} 
	} 
	
}
 
 void printArr(int rows ,int cols, int arr[100][100]){
 	int i, j; 
 	 	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%3d",arr[i][j]); 
	    	}
	    	printf("\n"); 
		}
}

 void printEdge(int rows , int cols , int arr[100][100]){
 	int i , j;
	  	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if (i==0 && j==0 && i==0 && j ==cols-1 || i== rows-1&&j==0 || i==rows-1 && j == cols-1  ){
		
				printf ("%3d",arr[i][j]);
			
				}
			
	}
	printf("\n"); 
		}
 } 
     
     void printBorder (int rows , int cols , int arr[100][100]){
     	int i , j;
	  	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
     	    if(i==0||j==0||i==rows-1 || j==cols -1) {
     	    	printf("%3d",arr[i][j]); 
			 }
     	
     	
     	
             }
             printf("\n"); 
         }
	 } 
    
    void printMain( int rows , int cols , int arr[100][100]){
    		int i , j;
	  	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if (i==j ){
				printf("%3d",arr[i][j]); 
			} 
    	
    	
    	
           }
       }
	} 
   
   void printRoad (int rows , int cols , int arr[100][100]){
   	  	int i , j;
	  	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			
			
	}
	printf("%3d",arr[i][rows-i-1]); 
		}  	
   }   
   
   int findPrime(int n){
   	int i;
 if (n<=1) {
        return 0;
    }
    for ( i=2;i*i<=n;i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;	
}


   
   
   
   
   
int main(){
	int choice ; 
	int rows , cols ; 
	int arr[100][100]; 
	do{
		displayMenu();
		scanf("%d",&choice); 
		switch (choice ){
			
			case 1 :  
			
			 printf("Moi ban nhap vao so hang: ");
	 scanf("%d",&rows);
	  printf("Moi ban nhap vao so cot: ");
	 scanf("%d",&cols);
	  getArr(rows , cols, arr);
	  break; 
	  case 2 :
	  printArr(rows , cols , arr);
	  break; 
	  case 3 : 
	  printEdge(rows , cols , arr);
	  break; 
	  case 4 :
	  if(rows != cols ){
	  	printf ("So hang phai bang so cot ") ;
	  	
	  }else{
	  	printBorder(rows , cols , arr); 
	  } 
			break; 
		case 5 : 
		  if(rows != cols ){
	  	printf ("So hang phai bang so cot\n ") ;
	  	
	  }else{
	  	printf("Duong cheo chinh cua mang la\n");
	  	 printMain(rows , cols , arr);
		  printf("\t"); 
		  printf("Duong cheo phu cua mang la\n");
		  printf("\t"); 
		  printRoad(rows , cols , arr); 
	  } 
			break ; 
			
		case 6 :
	
	  for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
		if (findPrime(arr[i][j])){
			printf("%d\t ", arr[i][j]);
		}		
	}
		
}
			
	 	break; 
			
			
			
			
			
	
		
		case 7 : 
		printf("Hen gap lai .\n");
		default : 
		printf("Lua chon cua ban khong hop le!\n");
		 
		
		
		
		
		
		
}
	}while(choice !=7) ;
	 
	
	  
	  
	
	
	return 0; 
} 
