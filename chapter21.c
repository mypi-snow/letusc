/*question 1*/
// #include <stdio.h>
// #include <string.h>
// void check(unsigned char n, char *games[]) {
//     int i, count = 0;
//     unsigned char k;
//     for (i = 7; i >= 0; i--) {
//         k = n & (1 << i);
//         if (k == (1 << i)) {
//             printf("%s \n", games[i]);
//             count++;
//         }
//     }
//     if (count >= 5) {
//         printf("They won the Champions trophy\n");
//     } else {
//         printf("They didn't win the Champions trophy\n");
//     }
// }
// int main() {
//     int bitno;
//     char *games[8] = {"cricket", "basketball", "football", "hockey", "lawn tennis", "table tennis", "carom", "chess"};
//     printf("Enter the bit pattern: ");
//     scanf("%d", &bitno);
//     check(bitno, games);
//     return 0;
// }
/*question 2*/
// #include<stdio.h>
// struct animal{
// 	char name[30];
// 	int type;
// };
// struct animal a={"OCELOT", 18};

// void showbits(unsigned char n){
// 	int i;
// 	unsigned char k, andmask;
// 	for(i=7; i>=0; i--){
// 		andmask = 1 << i;
// 		k=n&andmask;
// 		if(k==0){
//             printf("0");
//         }
//         else{
//             printf("1");
//         }

// 	}
// }
// int main(){
// 	int t, i;
// 	char *p[]= {"canine", "feline", "cetacean", "marsupial"};
// 	for(i=0; i<=3; i++){
// 		if((a.type & (1 << i)) == (1 << i)){
// 			printf("\nType of %s : %s\n", a.name, p[i]);
// 		}
// 	}
// 	if(a.type>>4 == 0)
// 		printf("It is Herbivorous\n");
// 	else
// 		printf("It is Carnivorous\n");
// }


#include<stdio.h>
void showbits(signed char n){
	int i;
	signed char andmask, k;
	for(i=7; i>=0; i--){
		andmask = 1<<i;
		k = n & andmask;
		if(k==0){
            printf("0");
        }
        else{
            printf("1");
        }
	}
}
int main(){
	int data[] = {273, 548, 786, 1096}, i, j;
	char *y[] = {"1st year", "2nd Year", "3rd year", "4th Year", "Mechanical", "Chemical", "Electronics", "Information Technology"};
	unsigned char temp;
	for(i=0; i<4; i++){
		printf("%d : ", data[i]);showbits(data[i]);printf("\n");
		for(k=0; k<7; k++){
			if((data[i] &(1<<j) ) == (1<<j)){
				printf("%s\n", y[k]);
			}
		}
		temp = data[i]>>8;
		printf("room no. : %d\n", temp); printf("\n");
	} 

}
// k = 35 l = -36 m = 0
// n = 97 o = 260 p = 1