#include <stdio.h>
#include <math.h>
/*question 1*/
// int main(){
//     int num;
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++){
//         printf("%d * %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }
/*question 2*/
// int main()
// {
//     float p,n,r,q,a;
//     int i; 
//     for(i=1;i<=10;i++)
//     {
//         printf("Set: %d\n",i);
//         printf("Enter Principle: ");
//         scanf("%f",&p);
//         printf("Enter Rate: ");
//         scanf("%f",&r);
//         printf("Enter Time(in year): ");
//         scanf("%f",&n);
//         printf("Enter Compound Interest: ");
//         scanf("%f",&q);
//         a = p*(pow((1+r/q),n*q));
//         printf("Amount: %.2f\n\n",a);
//     }
// }
/*question 3*/
// int main(){
//     float i,y,x;
//     printf("x    |    y    |    i\n");
//     for(x=5.5;x<=12.5;x+=0.5){
//         for(y=1;y<=6;y++){
//             i=2+(y+0.5*x);
//             printf("%0.2f    |    %0.2f    |    %0.2f\n",x,y,i);
//         }
//     }
//     return 0;
// }
/*question 4*/
// int main()
// {
// 	int i,a;
// 	float sum,act,term,x;
	
// 	printf("Enter the value of x : ");
// 	scanf("%f", &x);
	
// 	a=2;
// 	term=(x-1)/x;
// 	sum=term;
	
// 	for(i=1;i<=6;i++)
// 	{
// 		act=pow(term,a)/2;
// 		sum=sum+act;
// 		a++;
// 	}
	
// 	printf("%f is the sum of the series.\n", sum);
	
// 	return 0;
// }
/*question 5*/
// int main(){
//     int a,b,c;
//     for(a=1;a<=30;a++){
//         for(b=1;b<=30;b++){
//             for(c=1;c<=30;c++){
//                 if(a*a==b*b+c*c){
//                     printf("%d, %d, %d are the triplets\n",a,b,c);
//                 }
//             }
//         }
//     }
//     return 0;
// }
/*question 6*/
// int main(){
//     int population=100000;
//     for(int i=10;i>=1;i--){
//         population=population-(population*0.1);
//         printf("population in year %d is %d\n",i,population);
//     }
//     return 0;
// }
/*question 7*/
// int main()
// {
//     int i,num,x,y,count;
//     num=30000;
//     //for loop for range (1-30000)
//     for(i=1;i<=num;i++)
//     {
//         count=0;
//         for(x=1;x*x*x<i;x++)
//         {
//             //for-loop for finding Ramanujan number
//             for(y=x;x*x*x+y*y*y<=i;y++)
//             {
//                 //list all the numbers
//                 if(x*x*x+y*y*y==i)
//                 {
//                   count++;

//                 }
//             }
//         }
//         if(count==2)
//         {
//             printf("%d\n",i);
//         }
//     }
// }
/*question 8*/
// int main()
// {
//     int h;

    
//     for(h=0;h<=23;h++)
//     {
//         if(h==0)
//         {
//             printf("12 Midnight\n");
//             continue;
//         }

//         if(h<12)
//         {
//             printf("%d AM\n",h);
//         }


//         if(h==12)
//         {
//             printf("%d Noon\n",h);
//         }


//         if(h>12)
//         {
            
//             printf("%d PM\n",h%12);
//         }

//     }
// }
/*question 9*/

// int main()
// {
//  int num,r,c,sp,i=1;
//  printf("Enter any number : ");
//  scanf("%d", &num);
// 	 for(r=1; r<=num; r++)
// {
//  	 for(sp=1; sp<=num-r; sp++)
//    printf(" ");
//   for(c=1; c<=r; c++,i++)
// printf("%d ",i);  
//  printf("\n");
//  }
// return 0;
// }