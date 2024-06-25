/*question 1*/
// solution : The contents will be as follow:
// str1=Alice
// str2=in
// str3=wonder
// str4=land
/*question 2*/
// #include <stdio.h>
// #include <string.h>
// int main(){
// char str[10];
// printf("Enter 10 digit ISBN code: \n");
// scanf("%s",str);
// int checksum=0;
// for(int i=0;i<10;i++){
//     str[i]-=48;
//     checksum+=((i+1)*str[i]);
// }
// if(checksum%11){
//     printf("The code is not valid\n");
// }
// else{
//     printf("The code is valid\n");
// }
// return 0;}
/*question 3*/
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char cardno[20];
//     printf("Enter your 16 digit card number: \n");
//     scanf("%s",cardno);
//     int sum=0;
//     for(int i=0;i<15;i++){
//         cardno[i]-=48;
//         if(i%2==0){
//             sum+=cardno[i];
//         }
//         else{
//             cardno[i]*=2;
//             if(cardno[i]>=10){
//                 cardno[i]-=9;
//                 sum+=cardno[i];
//             }

//         }
//     }
//     if(sum%10!=0){
//         printf("Your card is valid\n");
//     }
//     else{
//         printf("Your card is invaid\n");
//     }
//     return 0;

// }