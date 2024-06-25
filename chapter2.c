# include <stdio.h>
#include <math.h>
#define PI 3.14159265
/*question 1*/
// int main( )
// {
//  int n, d1,d2,d3,d4,d5 ;
//  int sum ; 
//  printf ( "\nEnter a five digit number : " ) ;
//  scanf ( "%d", &n ) ;
//  d5 = n % 10 ; /* 5th digit */
//  n = n / 10 ; /* remaining digits */
//  d4 = n % 10 ; /* 4th digit */
//  n = n / 10 ; /* remaining digits */
//  d3 = n % 10 ; /* 3rd digit */
//  n = n / 10 ; /* remaining digits */
//  d2 = n % 10 ; /* 2nd digit */
//  n = n / 10 ; /* remaining digits */
//  d1 = n % 10 ; /* 1st digit */
//  sum =  (d1+d2+d3+d4+d5);
//  printf ( "The sum of the number is %d\n", sum) ;
//  return 0 ;
// } 
/*question 2*/
// int main(){
//     int x,y,r,omega;
//     scanf("%d%d",&x,&y);
//     r=sqrt(pow(x,2)+pow(y,2));
//     omega=atan(y/x);
//     printf("r is %d\n omega is %d",r,omega);
//     return 0;
// }
/*question 3*/
// float torad(double degrees) {
//     return degrees * PI / 180.0;
// }
// int main(){
//     float L1,L2,G1,G2;
//     float distance;
//     scanf("%f%f%f%f",&L1,&L2,&G1,&G2);
//     distance=3963* acos((sin(torad(L1)) *sin(torad(L2))+cos(torad(L1))*cos(torad(L2)))*(cos(torad(G2-G1))));
//     printf("The distance between them is %f",distance);
//     return 0;
// }
/*question 4*/
// int main(){
//     float t,v,wcf;
//     scanf("%f%f",&t,&v);
//     wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
//     printf("the wind chill factor is %f",wcf);
//     return 0;
// }
/*question 5*/
// int main(){
//     double degree,radian;
//     scanf("%lf",&degree);
//     radian=degree*(PI/180.0);
//     double sinvalue=sin(radian);
//     double cosvalue=cos(radian);
//     double tanvalue=tan(radian);
//     printf("sine value is %lf\ncosine value is %lf\ntangent value is %lf",sinvalue,cosvalue,tanvalue);
//     return 0;
// }
/*question 6*/
// int main(){
//     int c,d,temp;
//     scanf("%d%d",&c,&d);
//     printf("Before changing C is %d and D is %d\n",c,d);
//     temp=c;
//     c=d;
//     d=temp;
//     printf("After changing C is %d and D is %d",c,d);
//     return 0;
// }