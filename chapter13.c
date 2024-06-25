/*question 1*/
#include<stdio.h>
#include<math.h>
#define MAX 10 
// int main(){
//     int arr[50];
//     int negative=0;
//     int positive=0;
//     int n=25;
//     printf("enter the numbers\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             positive++;
//         }
//         else if(arr[i]<0){
//             negative++;
//         }
//     }
//     printf("number of positive numbers:%d\nnumber of negative numbers: %d",positive,negative);
//     return 0;
// }
/*question 2*/
// int main(){
//     int arr[100];
//     int n;
//     printf("enter the number of elements: \n");
//     scanf("%d",&n);
//     printf("enter the numbers\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[n-(i+1)]){
//             printf("arr[%d]=arr[%d-%d]\n",i,n,i+1);
//         }
//     }
//     return 0;
// }
/*question 3*/
// void sort(int *arr){
//     for(int i=0;i<24;i++){
//         for(int j=0;j<25-i;j++){
//             if(*(arr+j)>*(arr+j+1)){
//                 int temp=*(arr+j);
//                 *(arr+j)=*(arr+j+1);
//                 *(arr+j+1)=temp;
//             }
//         }
//     }
// }
// int main(){
//      int arr[25];
//      int *ptr=arr;
//      printf("enter the elements: \n");
//      for(int i=0;i<25;i++){
//         scanf("%d",&*(ptr+i));
//      }
//      sort(arr);
//     int min=*(ptr+0);
//     printf("The smallest number is %d",min);
//     return 0;
// }
/*question 4*/
// void insertionSort(int arr[])
// {
//     int i, key, j;
//     for (i = 1; i < 25; i++) {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }
// int main()
// {
//     int arr[25];
//     printf("enter the elements: \n");
//      for(int i=0;i<25;i++){
//         scanf("%d",&arr[i]);
//      }
//     insertionSort(arr);
//     for(int i=0;i<25;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
/*question 5*/
// void modify(int arr[]){
//     for(int i=0;i<10;i++){
//         arr[i]=3*arr[i];
//     }
// }
// int main(){
//     int arr[10];
//     printf("enter the elements: \n");
//     for(int i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Before changing\n");
//      for(int i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     modify(arr);
//     printf("\nthe new elements are\n");
//     for(int i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
/*question 6*/
// int main(){
//     int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int mean= sum/n;
//     printf("The mean is %d\n",mean);
//     int sum1=0;
//     for(int i=0;i<n;i++){
//         sum1+=pow((arr[i]-mean),2);
//     }
//     int sd= (sqrt(sum1/n));
//     printf("The standard deviation of the array is %d\n",sd);
//     return 0;
   
//    }
/*question 7*/
//  int main(){
//     float a[]={137.4,155.2,149.3,160.0,155.6,149.7};
//     float b[]={80.9,92.62,97.93,100.25,68.95,120.0};
//     float angle[]={0.78,0.89,1.35,9.00,1.25,1.75};
//     float area[6];
//     float largest=0;
//     int num=0;
//     for(int i=0;i<6;i++){
//         area[i]=(0.5)*(a[i])*(b[i])*(sin(angle[i]));
//         printf("The area of triangle %d is %f \n",i+1,area[i]);
//         if(area[i]>largest){
//             largest=area[i];
//             num=i;
//         }
//     }
//     printf("the largest area is of triangle %d and it values for %f\n",num+1,largest);
//  }
/*question 8*/
// float psxy(float x[],float y[],int n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=x[i]*y[i];
//     }
//     return sum;
// }
// float sx(float x[],int n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=x[i];
//     }
//     return sum;
// }
// float sy(float y[],int n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=y[i];
//     }
//     return sum;
// }
// float sqx(float x[],int n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=pow(x[i],2);
//     }
//     return sum;
// }
// float sqy(float y[],int n){
//     float sum=0;
//     for(int i=0;i<n;i++){
//         sum+=pow(y[i],2);
//     }
//     return sum;
// }
// int main(){
//     float x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
//     float y[]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
//     int n=sizeof(x)/sizeof(x[0]);
//     printf("there are %d points\n",n);
//     float r;
//     r=(psxy(x,y,n)-sx(x,n)*sy(y,n))/sqrt(((n*sqx(x,n))-pow(sx(x,n),2))*((n*sqy(y,n))-pow(sy(y,n),2)));
//     printf("The correlation coefficient is %f\n",r);
//     return 0;

// }
/*question 9*/
// int main(){
//     int x[10];
//     int y[10];
//     printf("enter the coordinates: \n");
//     for(int i=0;i<10;i++){
//         scanf("%d%d",&x[i],&y[i]);
//     }
//     int distance;
//     for(int i=0;i<10;i++){
//         distance+=sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
//     }
//     printf("The total distance between last and first points is %d",distance);
//     return 0;
// }
/*question 10*/
/*Insertion from right*/
void rAdd(int *lside, int *q, int *rside, int num)
{
	if (*rside == MAX - 1)
	{
		printf("\nDequeue is full, no more insertion is possible.\n");
		return;
	}

	if (*rside == -1)
		*rside = 0;
	else
		(*rside)++;
	q[*rside] = num;
}

/*Insertion from left*/
void lAdd(int *lside, int *q, int *rside, int num)
{
	int i;

	if (*rside == MAX - 1)
	{
		printf("\nDequeue is full, no more insertion is possible.\n");
		return;
	}

	for (i = *rside; i >= 0; i--)
		q[i+1] = q[i];

	q[0] = num;

	if (*lside == -1)
		*lside = 0;
	(*rside)++;
}

/*Dislays the list*/
void show(int *q, int *rside)
{
	int i;

	printf("\n\nList\n");
	for (i = 0; i <= *rside; i++)
		printf("%d\t", q[i]);
	printf("\n\n");
}

/*Retrieval from left*/
int lFetch(int *lside, int *q, int *rside)
{
	int item = q[0], i;
	if (*rside == -1)
	{
		printf("\nList is empty.\n");
		return NULL;
	}

	for (i = 0; i < *rside; i++)
		q[i] = q[i + 1];

	(*rside)--;
	return item;
}

/*Retrieval from right*/
int rFetch(int *lside, int *q, int *rside)
{
	if (*rside == -1)
	{
		printf("\nList is empty.\n");
		return NULL;
	}
	int item = q[*rside];
	(*rside)--;
	return item;
}
int main()
{
	int que[MAX];
	int left, right;
	left = right = -1;

	rAdd(&left, que, &right, 10);
	rAdd(&left, que, &right, 20);
	rAdd(&left, que, &right, 30);
	show(que, &right);

	lAdd(&left, que, &right, 5);
	show(que, &right);

	lFetch(&left, que, &right);
	show(que, &right);

	rFetch(&left, que, &right);
	show(que, &right);

	
	return 0;
}
