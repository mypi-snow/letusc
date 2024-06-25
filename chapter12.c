/*question 1*/
// You can see the code after the preprocessor gets substituted by adding `-E` 
// flag to the command line parameters in order to make sure that everything went well.

/*question 2*/
// #include <stdio.h>
// #define mean(x,y) ((x+y)/2)
// #define abslt(x) (x<0?-x:x)
// #define lower(x) (x>='A'&&x<='Z'?x+32:x)
// #define big(x,y,z) ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z)) 
// int main() {
//     int a,b,d;
//     char c;
//     printf("Enter first two numbers: ");
//     scanf("%d%d",&a,&b);
//     printf("Mean of %d and %d is %d\n",a,b,mean(a,b));
//     printf("Absolute value of %d is %d\n",a,abslt(a));
//     printf("Enter an uppercase alphabet: ");
//     scanf(" %c",&c);
//     printf("Lowercase of %c is %c\n",c,lower(c));
//     printf("enter third number: ");
//     scanf("%d",&d);
//     printf("Bigger of %d ,%d and %d is %d\n",a,b,d,big(a,b,d));
//     return 0;}
/*question 3*/
// #include <stdio.h>
// #include "interest.h"
// int main() {
//     float p,r,t;
//     printf("Enter principal, rate and time: ");
//     scanf("%f%f%f",&p,&r,&t);
//     float si=SI(p,r,t);
//     printf("Simple Interest = %f\n",si);
//     printf("Amount = %f\n",AMT(p,si));
//     return 0;
// }