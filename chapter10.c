#include <stdio.h>
#include <math.h>
/*question 1*/
// int binary(int n)
// {
//     int r;
//     r = n % 2;
//     n = n / 2;
//     if (n == 0)
//     {
//         printf("\nThe binary equivalent using recursion is %d", r);
//         return (r);
//     }
//     else
//         binary(n); /* Recursive call */
//     printf("%d", r);
// }
// int nonrec(int n)
// {
//     int x, sum=0, pos=1;
//     while (n!=0)
//     {
//         x = n%2;
//         sum = sum + (x*pos);
//         pos = 10*pos;
//         n = n/2;
//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     printf("\nEnter the number: ");
//     scanf("%d", &num);
//     binary(num); 
//     printf("\nBinary number without recursion is %d\n",nonrec(num));

//     return 0;
// }
/*question 2*/
// int getsum(int n)
// {
//     int sum=0;
//     if(n==1)
//         return 1;
//     else
//         return n+getsum(n-1);
// }

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The sum of first %d natural numbers is %d",n,getsum(n));
//     return 0;
// }
/*question 3*/

// void peg(int n, char fromrod, char torod, char auxrod) {
//     if (n == 1) {
//         printf("Move disk 1 from rod %c to rod %c\n", fromrod, torod);
//         return;
//     }
//     peg(n - 1, fromrod, auxrod, torod);
//     printf("Move disk %d from rod %c to rod %c\n", n, fromrod, torod);
//     peg(n - 1, auxrod, torod, fromrod);
// }

// int main() {
//     int n = 3; 
//     peg(n, 'A', 'C', 'B');  
//     return 0;
// }