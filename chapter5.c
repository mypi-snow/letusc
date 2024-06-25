#include <stdio.h>
#include <math.h>
#include<limits.h>
/*question 1*/
// int main(){
//     char ascii;
//     for(int i=0;i<=255;i++){
//         printf("%c=%d\n",i,i);
//     }
//     return 0;
// }
/*question 2*/
// int main(){
//     int num,temp,rem=0,sum=0,i,cube;
//     num=1;
//     temp=1;
//     for(i=1;i<=500;i++){
//         while(num!=0){
//             rem=num%10;
//             cube=pow(rem,3);
//             sum=sum+cube;
//             num=num/10;
//         }
//         if(sum==temp){
//             printf("%d\n",temp);
//         }
//         num=i+1;
//         temp=i+1;
//         cube=0;
//         rem=0;
//         sum=0;
//     }
//     return 0;
// }
/*question 3*/
// int main()
// {
//     int match_sticks = 21, user_choice, computer_choice;
//     while(match_sticks>=1)
//     {
//         printf("Total Match Sticks: %d\n", match_sticks);
//         printf("Pick up the match sticks between (1 to 4): ");
//         scanf("%d", &user_choice);

//         if(user_choice>4)
//         {
//             printf("Invalid Entry");
//             break;
//         }

        
//         computer_choice = 5 - user_choice;
      
//         printf("Computer picks up the %d match sticks.\n", computer_choice);
//         match_sticks = match_sticks-user_choice-computer_choice;
//         if(match_sticks==1)
//         {
//             printf("\nYou have been lost via computer.");
//             break;
//         }
//     }
//     return 0;
// }
/*question 4*/
// int main()
// {
//     int number, positive = 0, negative = 0, zero = 0;
//     char choice='Y';

//     do
//     {
//         printf("Enter a number: ");
//         scanf("%d", &number);

//         if (number > 0)
//         {
//             positive++;
//         }
//         else if (number < 0)
//         {
//             negative++;
//         }
//         else
//         {
//             zero++;
//         }

//         printf("Do you want to Continue(y/n)? ");
//         scanf(" %c", &choice); 

//     }while(choice == 'y' || choice == 'Y');


//     printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", positive, negative, zero);
// }
/*question 5*/
// void main()
// {
// int num,ocnum=1,foct=0,temp;
// printf("\nEnter an integer = ");
// scanf("%d",&num);
// while(num>=8) //loop for converting decimal to octal
// {
// temp=num%8;
// num=num/8;
// ocnum=(ocnum*10)+temp;
// }
// ocnum=(ocnum*10)+num; //number is in reverse
// while(ocnum!=1) //loop for reversing the octal result
// {
// temp=ocnum%10;
// ocnum=ocnum/10;
// foct=(foct*10)+temp;
// }
// printf("\nThe octal equivalent of %d\n",foct);
// }
/*question 6*/
// void main()
// {
//     int num;
//     int min = INT_MIN, max = INT_MAX;
//     char choice='y';

//     do{
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     if(num>min)
//         min = num;
//     if(num<max)
//         max = num;
//     printf("You want to add another integer(y/n)?: ");
//     scanf(" %c", &choice); 
//     }while(choice=='Y'||choice=='y');

// printf("Range is %d", (min-max));
// }