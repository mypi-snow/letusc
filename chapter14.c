#include<stdio.h>
/*question 1*/
// int main()
// {
// 	int threed[3][2][3] = {
// 		{
// 			1, 2, 3,
// 			4, 5, 6
// 		},
// 		{
// 			7, 8, 9,
// 			10, 11, 12
// 		},
// 		{
// 			13, 14, 15,
// 			16, 17, 18
// 		}
// 	};
// 	printf("\nFirst element : %d", threed[0][0][0]);
// 	printf("\nLast element : %d", threed[2][1][2]);
// 	return 0;
// }
/*question 5*/
// #include<stdio.h>
// int main()
// {
// 	int i, j;
// 	int n;
// 	int count=0;
// 	printf("enter the dimension of the matrix: \n");
// 	scanf("%d",&n);
// 	int mat[n][n];
// 	int mat1[n][n];
// 	printf("Enter the elements of the of the %d by %d matrix.\n", n, n);
// 	for (i = 0; i<n; i++)
// 		for (j = 0; j<n; j++)
// 			scanf("%d", &mat[i][j]);

// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			mat1[j][i]=mat[i][j];
// 		}
// 	}
//     for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			if(mat[i][j]!=mat1[i][j]){
// 			count++;
// 			break;
// 			}
			
// 		}
// 	}  
// 	if(count==0){
// 		printf("Its a symmetric matrix\n");
// 	} 
// 	else{
// 		printf("Its not a symmetric matrix\n");
// 	}
// 	return 0;
// }
/*question 6*/
// #include <stdio.h>
// #define n 6
// int main(){
//     int mat1[n][n];
// 	int mat2[n][n];
// 	int sum[n][n];
// 	int i,j;
// 	printf("Enter the elements for the first matrice: \n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}
// 	printf("Enter the elements for the second matrice: \n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			scanf("%d",&mat2[i][j]);
// 		}
// 	}
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			sum[i][j]=mat1[i][j]+mat2[i][j];
// 		}
// 	}
// 	printf("The sum of two matrix is: \n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			printf("%d | ",sum[i][j]);
// 		}
// 	}
// 	return 0;
// }
/*question 7*/
// #include <stdio.h>
// #define n 3
// int main(){
//     int mat1[n][n];
// 	int mat2[n][n];
// 	int sum[n][n];
// 	int i,j,k;
// 	printf("Enter the elements for the first matrice: \n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}
// 	printf("Enter the elements for the second matrice: \n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			scanf("%d",&mat2[i][j]);
// 		}
// 	}
// 		for (k=0;k<3;k++)
// 	{
// 		for (i = 0; i<3; i++)
// 		{
// 			sum[k][i] = 0;
// 			for (j = 0; j<3; j++)
// 				sum[k][i] = sum[k][i] + mat1[k][j] * mat2[j][i];
// 		}
// 	}
// 	printf("The product of the two matrices is\n");
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			printf("%d ",sum[i][j]);
// 		}
// 	}
// 	return 0;
// }
/*question 8*/
//   #include<stdio.h>
//    void shift(int *p, int n){
//      int i, temp1, temp2;
//      temp1 = *p;
//      temp2 = *(p+1);
//      for(i=0;i<n-2;i++){
//          *(p+i) = *(p+i+2);
//      }
//      *(p+n-2)=temp1;
//      *(p+n-1)=temp2;

//      p = p + 5;
//      if(*p){
//          shift(p, n);}
//    }

//     int main(){
//      int arr[5] = {15, 30, 28, 19, 61};
//      int ar[4][5]={
//         {1,2,3,4,5},
//         {11,12,13,14,15},
//         {21,22,23,24,25},
//         {31,32,33,34,35}
//       };
//       int i, j;

//      shift(arr, 5);

//      for(i=0;i<5;i++)
//      printf("%d ", arr[i]);
//      printf("\n");

//      shift(ar[0], 5);

//      for(i=0;i<4;i++){
//          for(j=0;j<5;j++)
//          printf("%d ", ar[i][j]);
//       printf("\n");
//      }
//      return 0;
//    }