/*question 1*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void sort_names(char** name_list, int tot_names)
// {
// 	int i, j, k = 0;

// 	for (i = 0; i <= tot_names; i++)
// 	{
// 		for (j = i + 1; j <= tot_names; j++)
// 		{
	
// 			for (k = 0; name_list[i][k] == name_list[j][k]; k++);

// 			if (name_list[i][k] > name_list[j][k])
// 				swap(name_list[j], name_list[i]);
// 		}
// 	}
// }
// void swap(char *a, char *b)
// {
// 	char temp[20];
// 	strcpy(temp, a);
// 	strcpy(a, b);
// 	strcpy(b, temp);
// }
// int main()
// {
// 	char ch = 'i', *help[30], name[50], *p;
// 	int i, j, tot_names;
// 	FILE *fp;
// 	fp = fopen("student.txt", "r+");
// 	if (fp == NULL)
// 	{
// 		printf("\nCannot open the file.\n");
// 		exit(1);
// 	}
// 	for (i = 0; ch != EOF; i++)
// 	{
// 		ch = fgetc(fp);
// 		for (j = 0; ch != '\n'; j++)
// 		{
// 			if (ch == EOF)
// 				break;

// 			name[j] = ch;
// 			ch = fgetc(fp);
// 		}

		
// 		name[j] = '\0';

	
// 		p = (char*)malloc(50);
// 		strcpy(p, name);
// 		help[i] = p;
// 	}
// 	tot_names = i - 1;

// 	sort_names(help, tot_names);

// 	for (j = 0; j <= tot_names; j++)
// 		puts(help[j]);

// 	fclose(fp);

// 	return 0;
// }
/*question 2*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<ctype.h>
// int main()
// {
//     FILE *fs,*ft;
//     char ch;
//     fs=fopen("file1.txt","r"); 
//     if(fs==NULL)
//     {
//         printf("file1 not found\n");
//         exit(1);
//     }
//     ft=fopen("file2.txt","w");  
//     if(ft==NULL)
//     {
//         printf("file2 not found\n");
//         exit(1);
//     }
//     while (1)
//     {
//         ch = fgetc(fs);
//         if (ch == EOF)
//             break;
//         if (islower(ch))
//             ch = toupper(ch);
//         fputc(ch, ft);
//     }
//     fclose(fs);
//     fclose(ft);
//     return 0;
// }
/*Question 3*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     FILE *f1,*f2,*ft;
//     char str1[100],str2[100];
//     char *ptrch;
//     int flag=0;
//     f1=fopen("file1.txt","r");
//     if(f1==NULL)
//     {
//         printf("file1 not found\n");
//         exit(1);
//     }
//     f2=fopen("file2.txt","r");
//     if(f2==NULL)
//     {
//         printf("file2 not found\n");
//         exit(1);
//     }
//     ft=fopen("file3.txt","w");
//     if(ft==NULL)
//     {
//         fclose(f1);
//         fclose(f2);
//         printf("file3 not found\n");
//         exit(1);
//     }
//     while(fgets(str1,99,f1)!=NULL);
//     {
//         ptrch=strchr(str1,'\n');
//         fputs(str1,ft);
//         if(!ptrch)
//             fputs("\n",ft);
//         if(fgets(str2,99,f2)!=NULL)
//         {
//             fputs(str2,ft);
//             ptrch=strchr(str2,'\n');
//             flag=1;
//             if(!ptrch)
//                 fputs("\n",ft);
//         }
//         else
//             fputs("\n",ft);
//     }
//     if(flag==1)
//     {
//         while(fgets(str2,99,f2)!=NULL)
//         {
//             ptrch=strchr(str1,'\n');
//             fputs(str2,ft);
//             if(ptrch)
//                 fputs("\n",ft);
//         }
//     }
//     printf("Copying file completed!\n");
//     fclose(f1);
//     fclose(f2);
//     fclose(ft);
// }
/*question 4*/
// #include <stdio.h>
// #include <conio.h>
// #include <ctype.h>

// void encode(FILE*, FILE*);
// void decode(FILE*, FILE*);
// void display(FILE*);

// int main() {
//     FILE *sf, *df;
    
  
//     sf = fopen("file5.txt", "r");
    
//     df = fopen("file4.txt", "w");

//     if (sf == NULL || df == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }
    
    
//     printf("Original file content:\n");
//     display(sf);
    
    
//     rewind(sf);
    
 
//     encode(sf, df);
//     fclose(sf);
//     fclose(df);
    
 
//     df = fopen("file4.txt", "r");
//     printf("Encoded file content:\n");
//     display(df);
//     fclose(df);

//     df = fopen("file4.txt", "r");
//     sf = fopen("file5_decoded.txt", "w");
//     if (df == NULL || sf == NULL) {
//         printf("Error opening file.\n");
//         return 1;
//     }
    
   
//     decode(df, sf);
//     fclose(sf);
//     fclose(df);
    
//     sf = fopen("file5_decoded.txt", "r");
//     printf("Decoded file content:\n");
//     display(sf);
//     fclose(sf);
    
//     _getch();
//     return 0;
// }

// void encode(FILE *sf, FILE *df) {
//     char ch;
//     while ((ch = fgetc(sf)) != EOF) {
//         if (isalpha(ch) || ch == ' ' || ch == '\n') {
//             switch (ch) {
//                 case '\n': fputc('@', df); 
//                 break;
//                 case 'a': fputc('!', df); 
//                 break;
//                 case 'b': fputc('#', df);
//                  break;
//                 case 'c': fputc('$', df); 
//                 break;
//                 case 'd': fputc('%', df); 
//                 break;
//                 case 'e': fputc('&', df); 
//                 break;
//                 case 'f': fputc('*', df);
//                  break;
//                 case 'g': fputc('(', df); 
//                 break;
//                 case 'h': fputc(')', df); 
//                 break;
//                 case 'i': fputc('+', df); 
//                 break;
//                 case 'j': fputc('/', df); 
//                 break;
//                 case 'k': fputc('{', df);
//                  break;
//                 case 'l': fputc('}', df);
//                  break;
//                 case 'm': fputc(';', df); 
//                 break;
//                 case 'n': fputc(':', df);
//                  break;
//                 case 'o': fputc('[', df); 
//                 break;
//                 case 'p': fputc(']', df); 
//                 break;
//                 case 'q': fputc('"', df); 
//                 break;
//                 case 'r': fputc('`', df); 
//                 break;
//                 case 's': fputc('\\', df);
//                 break;
//                 case 't': fputc('|', df); 
//                 break;
//                 case 'u': fputc('=', df); 
//                 break;
//                 case 'v': fputc('-', df); 
//                 break;
//                 case 'w': fputc('_', df); 
//                 break;
//                 case 'x': fputc('<', df); 
//                 break;
//                 case 'y': fputc('^', df);
//                 break;
//                 case 'z': fputc('?', df); 
//                 break;
//                 case 'A': fputc('!', df); 
//                 break;
//                 case 'B': fputc('#', df); 
//                 break;
//                 case 'C': fputc('$', df); 
//                 break;
//                 case 'D': fputc('%', df);
//                  break;
//                 case 'E': fputc('&', df); 
//                 break;
//                 case 'F': fputc('*', df); 
//                 break;
//                 case 'G': fputc('(', df); 
//                 break;
//                 case 'H': fputc(')', df); 
//                 break;
//                 case 'I': fputc('+', df); 
//                 break;
//                 case 'J': fputc('/', df); 
//                 break;
//                 case 'K': fputc('{', df); 
//                 break;
//                 case 'L': fputc('}', df); 
//                 break;
//                 case 'M': fputc(';', df); 
//                 break;
//                 case 'N': fputc(':', df); 
//                 break;
//                 case 'O': fputc('[', df); 
//                 break;
//                 case 'P': fputc(']', df); 
//                 break;
//                 case 'Q': fputc('"', df);
//                 break;
//                 case 'R': fputc('`', df); 
//                 break;
//                 case 'S': fputc('\\', df); 
//                 break;
//                 case 'T': fputc('|', df); 
//                 break;
//                 case 'U': fputc('=', df); 
//                 break;
//                 case 'V': fputc('-', df); 
//                 break;
//                 case 'W': fputc('_', df); 
//                 break;
//                 case 'X': fputc('<', df); 
//                 break;
//                 case 'Y': fputc('^', df);
//                 break;
//                 case 'Z': fputc('?', df); 
//                 break;
//                 case ' ': fputc('1', df);
//                 break;
//             }
//         } else {
//             fputc(ch, df);
//         }
//     }
// }

// void decode(FILE *df, FILE *ef) {
//     char ch;
//     while ((ch = fgetc(df)) != EOF) {
//         switch (ch) {
//             case '@': fputc('\n', ef); 
//             break;
//             case '!': fputc('a', ef); 
//             break;
//             case '#': fputc('b', ef); 
//             break;
//             case '$': fputc('c', ef); 
//             break;
//             case '%': fputc('d', ef); 
//             break;
//             case '&': fputc('e', ef); 
//             break;
//             case '*': fputc('f', ef); 
//             break;
//             case '(': fputc('g', ef); 
//             break;
//             case ')': fputc('h', ef); 
//             break;
//             case '+': fputc('i', ef); 
//             break;
//             case '/': fputc('j', ef);
//              break;
//             case '{': fputc('k', ef); 
//             break;
//             case '}': fputc('l', ef);
//              break;
//             case ';': fputc('m', ef); 
//             break;
//             case ':': fputc('n', ef);
//              break;
//             case '[': fputc('o', ef);
//              break;
//             case ']': fputc('p', ef); 
//             break;
//             case '"': fputc('q', ef); 
//             break;
//             case '`': fputc('r', ef); 
//             break;
//             case '\\': fputc('s', ef); 
//             break;
//             case '|': fputc('t', ef); 
//             break;
//             case '=': fputc('u', ef); 
//             break;
//             case '-': fputc('v', ef); 
//             break;
//             case '_': fputc('w', ef); 
//             break;
//             case '<': fputc('x', ef); 
//             break;
//             case '^': fputc('y', ef); 
//             break;
//             case '?': fputc('z', ef); 
//             break;
//             case '1': fputc(' ', ef); 
//             break;
//             default: fputc(ch, ef);
//         }
//     }
// }

// void display(FILE *fp) {
//     char str[50];
//     rewind(fp); 
//     while (fgets(str, 50, fp) != NULL) {
//         printf("%s", str);
//     }
//     printf("\n");
//     _getch();
// }
/*question 5*/
// #include<stdio.h>
// #include<string.h>
// #include<conio.h>

// void display(char*);
// void add_info(int, char*, float);
// void transaction(int, char, float);

// struct customer
// {
// int accno;
// char name[30];
// float balance;
// };

// struct trans
// {
// int accno;
// char trans_type;
// float amount;
// };

// int main()
// {
// add_info(1, "Yash", 2000);
// puts("\n\t\tBefore Transaction");
// display("customer.dat");
// transaction(1, 'd', 1000);
// puts("\n\t\tAfter Transaction");
// display("customer.dat");
// _getch();
// return 0;
// }

// void display(char *file)
// {
// FILE *fp;
// struct customer holder;
// fp = fopen(file, "rb");
// while (fread(&holder, sizeof(holder), 1, fp) == 1)
// {
// 	printf("\n%d", holder.accno);
// 	printf(":\t%s", holder.name);
// 	printf("\t%f\n", holder.balance);
// }
// fclose(fp);
// }

// void add_info(int accno, char *name, float bal)
// {
// FILE *fp;
// struct customer holder;
// fp = fopen("customer.dat", "rb+");
// if (fp == NULL)
// 	fp = fopen("customer.dat", "wb");
// fseek(fp, 0, SEEK_END);
// holder.accno = accno;
// strcpy(holder.name, name);
// holder.balance = bal;
// fwrite(&holder, sizeof(holder), 1, fp);
// fclose(fp);
// }

// void transaction(int accno, char ttype, float amount)
// {
// FILE *fp, *temp;
// struct customer holder;
// fp = fopen("customer.dat", "rb");
// temp = fopen("temp.dat", "wb");
// while (fread(&holder, sizeof(holder), 1, fp) == 1)
// {
// 	if (holder.accno == accno)
// 	{
// 		switch (ttype)
// 		{
// 		case 'd':
// 		case 'D':
// 			holder.balance += amount;
// 			break;
// 		case 'w':
// 		case 'W':
// 			if ((holder.balance - amount) < 100)
// 			{
// 				system("cls");
// 				printf("\nYour account balance is low.\n");
// 				printf("Transaction failed!!");
// 				_getch();
// 			}
// 			else
// 				holder.balance -= amount;
// 			break;
// 		default:
// 			system("cls");
// 			puts("Wrong transaction type!!");
// 			puts("\nTry Again!!");
// 			fclose(fp);
// 			fclose(temp);
// 			remove("temp.dat");
// 			return;
// 		}
// 	}
// 	fwrite(&holder, sizeof(holder), 1, temp);
// }
// fclose(fp);
// fclose(temp);
// remove("customer.dat");
// rename("temp.dat", "customer.dat");
// }
/*question 6*/
// 	#include<stdio.h>
// 	#include<conio.h>
// 	#include<string.h>
		

// 	struct date
// 	{
// int d, m, y;
// };

// struct employee
// {
// char empcode[6];
// char empname[20];
// struct date join_date;
// float salary;
// };

// /*To display list in way they are actually saved in disk.*/
// void display(char*);
// /*To make file before sorting them*/
// void add_info(char*, char*, struct date, float);
// /*Sort by date of joining*/
// void sortbydoj(char*);
// void swap(struct employee*, struct employee*);

// int main()
// {
// struct date d = {13, 1, 1995};
// add_info("EMP01","Yash", d,  70000.00);
// d.d = 17; d.m = 5; d.y = 1994;
// add_info("EMP04","Karan", d,40000.00);
// d.d = 7; d.m = 7; d.y = 1995;
// add_info("EMP03","Deepak", d,45000.00);
// d.d = 2; d.m = 11; d.y = 1995;
// add_info("EMP02","Rupesh",d,45000.00);
// d.d = 15; d.m = 1; d.y = 2001;
// add_info("EMP04", "Vikas", d, 21000.00);
// d.d = 24; d.m = 5; d.y = 1993;
// add_info("EMP06", "Raj", d, 55000.00);
// sortbydoj("Record.dat");
// _getch();
// return 0;
// }


// void display(char *file)
// {
// FILE *fp;
// struct employee e;
// fp = fopen(file, "rb");
// while (fread(&e, sizeof(e), 1, fp) == 1)
// {
// 	printf("\n%s", e.empcode);
// 	printf("\t%s", e.empname);
// 	printf("\t%d", e.join_date.d);
// 	printf("\t%d", e.join_date.m);
// 	printf("\t%d", e.join_date.y);
// 	printf("\t%f\n", e.salary);
// }
// fclose(fp);
// }

// void add_info(char *code, char *name, struct date doj, float salary)
// {
// FILE *fp;
// fp = fopen("Record.dat", "rb+");
// if (fp == NULL)
// 	fp = fopen("Record.dat", "wb");
// struct employee e;
// strcpy(e.empcode, code);
// strcpy(e.empname, name);
// e.join_date = doj;
// e.salary = salary;
// fseek(fp, 0, SEEK_END);
// fwrite(&e, sizeof(e), 1, fp);
// fclose(fp);
// }

// void swap(struct employee *a, struct employee *b)
// {
// struct employee temp;
// temp = *a;
// *a = *b;
// *b = temp;
// }

// void sortbydoj(char *file)
// {
// int i = 0, j, count;
// FILE *fp1;
// struct employee e[100], temp;
// fp1 = fopen(file, "rb");
// if (fp1 == NULL)
// {
// 	puts("\nUnable to open file or the file do not exist.");
// 	exit(1);
// }
// while (1)
// {
// 	/*Saving the data in the array of structures*/
// 	if (fread(&e[i], sizeof(e[i]), 1, fp1) != 1)
// 		break;
// 	i++;
// }

// /*Total number of records*/
// count = i;

// for (i = 0; i < count; i++)
// {
// 	for (j = i + 1; j < count; j++)
// 	{
// 		if (e[i].join_date.y >= e[j].join_date.y)
// 			if (e[i].join_date.y > e[j].join_date.y)
// 				swap(&e[i], &e[j]);
// 			else
// 				if (e[i].join_date.m >= e[j].join_date.m)
// 					if (e[i].join_date.m > e[j].join_date.m)
// 						swap(&e[i], &e[j]);
// 					else if (e[i].join_date.d >= e[j].join_date.d)
// 						swap(&e[i], &e[j]);
// 	}
// }


// /*Printing the array after sorting by date of joining*/

// printf("Employee Id\tName\tdd  mm  yyyy\tSalary\n");
// for (i = 0; i < count; i++)
// {
// 	printf("\n%-12s", e[i].empcode);
// 	printf("\t%s", e[i].empname);
// 	printf("\t % 2d", e[i].join_date.d);
// 	printf("% 2d", e[i].join_date.m);
// 	printf("% 2d", e[i].join_date.y);
// 	printf("\t%2.2f\n", e[i].salary);

// }
// }
/*question 7*/
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// #include<stdlib.h>
// int total;
// struct blood{
// 	char name[20];
// 	char address[40];
// 	int age;
// 	int blood_type;
// }arr[10];

// void add(struct blood data){
// 	FILE *fp;
// 	fp = fopen("donor.DAT", "r+");
// 	if(fp == NULL)
// 		fp = fopen("donor.DAT", "w");
// 	fseek(fp, 0, SEEK_END);
// 	fprintf(fp, "%-20s", data.name);
// 	fprintf(fp, "%-40s ", data.address);
// 	fprintf(fp, "%-2d ", data.age);
// 	fprintf(fp, "%d\n", data.blood_type);
// 	fclose(fp);
// }

// void display(char *file){
// 	FILE *fp;
// 	fp = fopen(file, "r");
// 	char str[20];
// 	while(fgets(str, 19, fp) != NULL)
// 		printf("%s", str);
// 	fclose(fp);
// }

// void lessthan25(char *file){
// 	FILE *fp;
// 	struct blood data;
// 	int age;
// 	char str[68];
// 	fp = fopen(file, "r");
// 	while(fgets(str, 67, fp) != NULL){
// 		age = (str[61] - 48) * 10 + (str[62] - 48);
// 		if (age < 25)
// 			if(str[64]=='2')
// 				printf("\n%s", str);
// 	}
// 	fclose(fp);
// }
// int main(){
// 	int i;
// 	printf("Enter number of records: ");
// 	scanf("%d", &total);
// 	printf("\nEnter data:\n");
// 	for(i=0; i<total; i++){
// 		fflush(stdin);
// 		printf("\tName: ");
// 		gets(arr[i].name); 
// 		printf("\tAddress: ");
// 		gets(arr[i].address);  fflush(stdin);
// 		printf("\tAge: ");
// 		scanf("%d", &arr[i].age);
// 		printf("\tBlood type: ");
// 		scanf("%d", &arr[i].blood_type); fflush(stdin);
		
// 		add(arr[i]);
// 	}
	
// 	lessthan25("donor.DAT");
// 	return 0;
// }
/*question 8*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
// 	FILE *fs;
// 	char str[25];
// 	int total, i, n, count=0;
// 	fs = fopen("Students.DAT", "w+");
// 	printf("Enter number of students: ");
// 	scanf("%d", &total);
// 	printf("\nEnter names: \n");
// 	fflush(stdin);
// 	for(i=0; i<total; i++){
// 		printf("\tname%d: ", i+1);
// 		fgets(str, 25, stdin);
// 		fputs(str, fs);
// 	}
// 	fclose(fs);
// 	printf("\nEnter value of n to display nth name: ");
// 	scanf("%d", &n);
// 	fs = fopen("Students.DAT", "r");
// 	while(fgets(str, 25, fs)!=NULL){
// 		count++;
// 		if(count==n){
// 			str[strlen(str)-1]='\0';
// 			printf("\n%dth name: %s", n, str);
// 		}
// 	}
// }
/*Question 9*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int total_m, total_t;
// struct stud{
// 	int rollno;
// 	char name[30];
// }arr[20];
// struct trans{
// 	int rollno;
// 	char code;
// }brr[10];
// typedef struct stud stud;

// int compare(const void * a, const void * b){
// 	stud *temp_a = (stud *)a;
// 	stud *temp_b = (stud *)b;
// 	return temp_a->rollno - temp_b->rollno;
// }

// void add(int rollno){
// 	char str[30];
// 	int i;
// 	fflush(stdin);
// 	printf("name of rollno %d: ", rollno);
// 	gets(str);
// 	arr[total_m].rollno = rollno;
// 	strcpy(arr[total_m].name, str);
// 	total_m=total_m+1;
// }

// void del(int rollno){
// 	int i;
// 	for(i=0; arr[i].rollno!=rollno; i++);
// 	for(i; i<total_m-1; i++){
// 		arr[i].rollno = arr[i+1].rollno;
// 		strcpy(arr[i].name, arr[i+1].name);
// 	}
// 	total_m=total_m-1;	
// }

// int main(){
// 	FILE *fm, *ft, *fu;
// 	int i;
// 	printf("Enter number of students in master file: ");
// 	scanf("%d", &total_m);
// 	fflush(stdin);
// 	fm = fopen("master.DAT", "r");
// 	if(fm==NULL){
// 		printf("can't open master file"); exit(0);
// 	}
// 	for(i=0; i<total_m; i++){
// 		fscanf(fm, "%d", &arr[i].rollno);
// 		fseek(fm, 1, SEEK_CUR);
// 		fgets(arr[i].name, 30, fm);
// 		arr[i].name[strlen(arr[i].name)-1]='\0';
// 	}fclose(fm);

// 	printf("\nEnter number of students in transaction file: ");
// 	scanf("%d", &total_t);
// 	fflush(stdin);
// 	ft = fopen("transaction.DAT", "r");
// 	if(ft==NULL){
// 		printf("\ncan't open transaction file"); exit(1);
// 	}
// 	for(i=0; i<total_t; i++){
// 		fscanf(ft, "%d", &brr[i].rollno);
// 		fseek(fm, 1, SEEK_CUR);
// 		brr[i].code = fgetc(ft);
// 		fgetc(ft);
// 		if(brr[i].code=='A')
// 			add(brr[i].rollno);
// 		else if(brr[i].code=='D')
// 			del(brr[i].rollno);
// 	}fclose(ft);	
	
// 	qsort(arr, total_m, sizeof(struct stud), compare);  
// 	fu = fopen("updated.DAT", "w+");
// 	for(i=0; i<total_m; i++){
// 		fprintf(fu, "%d ", arr[i].rollno);
// 		fputs(arr[i].name, fu);fputc('\n', fu);
// 	}
// 	return 0;
// }
/*Question 10*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


#define FOUND (strcmp(word, "a") == 0 || strcmp(word, "an") == 0\
				|| strcmp(word, "the") == 0 || strcmp(word, "A") == 0\
				|| strcmp(word, "An") == 0 || strcmp(word, "The") == 0)

void delart(char*);

int main(){
	delart("orignalfile.txt");
	return 0;
}

void delart(char *file){
	FILE *fp, *nf;
	int i;
	char word[20];
	fp = fopen(file, "r+");
	nf = fopen("newfile.txt", "w");
	if(fp == NULL){
		puts("\nCannot open the file.\n");
		exit(1);
	}
	for(i = 0; 1; i++){
		word[i] = fgetc(fp);
		if(word[i] == EOF)
			break;
		if(word[i] == ' '){
			word[i] = '\0';
			if(FOUND){
				
				strcpy(word, " ");
				fputs(word, nf);
			}
			else{
				fputs(word, nf);
				fputc(' ', nf);
			}
			i = -1;
			
		}
	}
	printf("Done");
}