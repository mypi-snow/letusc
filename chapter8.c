#include <stdio.h>
#include <math.h>
// /*question 1*/
// void leap(int n){
//     if(n%4==0){
//         printf("its a leap year");
//     }
//     else{
//         printf("its not a leap year");
//     }
// }
// int main(){
//     int year;
//     printf("enter your year: ");
//     scanf("%d",&year);
//     leap(year);
//     return 0;
// }
/*question 2*/

void prime(int num)
{
    int x;
    for(x=2;x<=num;x++)
    {
        if(num%x==0)
        {
            printf("%d, ",x);
            prime(num/x);
            break;
        }
    }
}
void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The Prime Factors of %d are: ",num);
    prime(num);
}
