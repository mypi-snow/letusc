// /*question 1*/
// // #include <stdio.h>
// // #include <string.h>
// // struct student{
// //     char rollnumber[20]; char name[10]; char department[10]; char course[10];int yearofjoining;
    
// // };
// // void years(int year, int n,struct student no[]){
// //     for(int i=0;i<n;i++){
// //         if(no[i].yearofjoining==year){
// //             printf("Roll number of the student: %s\n",no[i].rollnumber);
// //             printf("Name of the student: %s\n",no[i].name);
// //             printf("Department of the student: %s\n",no[i].department);
// //             printf("Course selected by the student: %s\n",no[i].course);
// //         }
// //         printf("\n");
// //     }

// // }
// // void data(char rollno[], int n,struct student no[]){
// //     for(int i=0;i<n;i++){
// //         if(strcmp(no[i].rollnumber,rollno)==0){
// //             printf("Roll number of the student: %s\n",no[i].rollnumber);
// //             printf("Name of the student: %s\n",no[i].name);
// //             printf("Department of the student: %s\n",no[i].department);
// //             printf("Course selected by the student: %s\n",no[i].course);
// //         }
// //     }
// // }
// // int main(){
// //     struct student no[450];
// //     int n;
// //     printf("Enter the number of students: \n");
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         printf("Enter the rollnumber of student %d:\n",i+1);
// //         scanf("%s",no[i].rollnumber);
// //         printf("Enter the name of student %d:\n",i+1);
// //         scanf("%s",no[i].name);
// //         printf("Enter the department of student %d:\n",i+1);
// //         scanf("%s",no[i].department);
// //         printf("Enter the course selected by the student %d:\n",i+1);
// //         scanf("%s",no[i].course);
// //         printf("Enter the year of joining of the student %d:\n",i+1);
// //         scanf("%d",&no[i].yearofjoining);
// //         printf("\n");
// //     }
// //     int year;
// //     char rollno[20];
// //     printf("Enter the year you want to find details about students: \n");
// //     scanf("%d",&year);
// //     years(year,n,no);
// //     printf("Enter the rollno you want to find details about: \n");
// //     scanf("%s",rollno);
// //     data(rollno,n,no);
// //     return 0;
// // }
// /*question 2*/

// /*question 3*/
// // #include <stdio.h>
// // #include <string.h>
// // struct engine{
// //     char serial[10];
// //     int yearofmanufacture;
// //     char metal[10];
// //     int quantity;
// // }
// // martin[10]={
// //     "AA0",2010,"Carbon",2,
// //     "BB1",2002,"Steel",10,
// //     "BB2",1990,"Steel",5,
// //     "CC1",2007,"Carbon",4,
// //     "CC6",2020,"Carbon",5,
// //     "CC7",1998,"Steel",10
// // };
// // void information(char from[],char to[]){
// //     char firstletter;
// //     char lastdigit;
// //     int i;
// //     for(i=0;martin[i].serial[0]!=from[i];i++);
// //     while(1){
// //         printf("Serial number: %s\n",martin[i].serial);
// //         printf("Year of manufacturing: %d\n",martin[i].yearofmanufacture);
// //         printf("Material Used to make the model: %s\n",martin[i].metal);
// //         printf("Number of cars made: %d\n",martin[i].quantity);
// //         if(i==10){
// //         i=0;}
// //     i++;
// //     if(martin[i].serial[0]==to[i]&&martin[i].serial[2]==to[2]){
// //         printf("Serial number: %s\n",martin[i].serial);
// //         printf("Year of manufacturing: %d\n",martin[i].yearofmanufacture);
// //         printf("Material Used to make the model: %s\n",martin[i].metal);
// //         printf("Number of cars made: %d\n",martin[i].quantity);
// //         return;
// //     }
// //     }
// // }
// // int main(){
// //     char from[5],to[5];
// //     printf("Enter the serial number to start the list: \n");
// //     scanf("%s",from);
// //     printf("Enter the serial number where to end: \n");
// //     scanf("%s",to);
// //     printf("Engines information are as follow\n\n");
// //     information(from,to);
// //     return 0;

// // }
// /*question 4*/
// // #include<stdio.h>
// // #include<stdlib.h>
// // #define max 20
// // struct players{
// //     int avg;char name[30];int age; int no_of_matches;
// // }india[max]={
// //     100, "Sachin Tendulkar", 40, 50,
// // 	97, "Dhoni", 35, 56,
// // 	66, "Virat kholi", 32, 45,
// // 	153, "Suresh Raina", 36, 21,
// // 	101, "Yuvaraj Singh", 32, 45,
// // };
// // int compare(const void * a, const void * b)
// // {
// // 	return (*(int*)a - *(int*)b);
// // }
// // int main()
// //     {
// // 	int i;
// // 	qsort(india, 5, sizeof(struct players), compare);

// // 	for (i = 0; i < 5; i++)
// // 	{
// // 		printf("Name : %s", india[i].name);
// // 		printf("\nAge : %d", india[i].age);
// // 		printf("\nTotal Test Matches played : %d", india[i].no_of_matches);
// // 		printf("\nAverage Run : %d\n\n\n", india[i].avg);
// // 	}

// // 	return 0;
// // }
// /*question 5*/
// #include <stdio.h>
// #include <string.h>



// struct Employee
// {
// 	int EmpCode;
// 	char Name[50];
// 	int JoiningDate;
// 	int JoiningMonth;
// 	int JoiningYear;
// };


// void main()
// {
// 	int n;
// 	int day2,day1,mon1,mon2,year1,year2;
// 	struct Employee Employees[3];
// 	int day_diff, mon_diff, year_diff;  
	
// 	printf("\nEnter Current Date  (1-31): "); scanf("%d",&day2);
// 	printf("\nEnter Current Month (1-12): "); scanf("%d",&mon2);
// 	printf("\nEnter Current Year  (YYYY): "); scanf("%d",&year2);
// 	for(n=0;n<3;n++)
// 	{
// 		printf("\nEnter Emp.-%d Information:",n+1);
// 		printf("\nEnter Emp. Code    : "); scanf("%d",&Employees[n].EmpCode);
// 		printf("\nEnter Emp. Name    : "); scanf("%s",&Employees[n].Name);
// 		printf("\nEnter Joining Date : "); scanf("%d",&Employees[n].JoiningDate);
// 		printf("\nEnter Joining Month: "); scanf("%d",&Employees[n].JoiningMonth);
// 		printf("\nEnter Joining Year : "); scanf("%d",&Employees[n].JoiningYear);
// 	}
	
// 	for(n=0;n<3;n++)
// 	{
// 	day1=Employees[n].JoiningDate;
// 	mon1=Employees[n].JoiningMonth;
// 	year1=Employees[n].JoiningYear;	
//     if(day2 < day1)
//     {      
//         if (mon2 == 3)
//         {
//             if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) day2 += 29;
//             else                day2 += 28;
//         }


//         else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12)       day2 += 30; 
//         else           day2 += 31;
//         mon2 = mon2 - 1;
//     }


//     if (mon2 < mon1)
//     {
//         mon2 += 12;
//         year2 -= 1;
//     }       


//     day_diff = day2 - day1;
//     mon_diff = mon2 - mon1;
//     year_diff = year2 - year1;
// 	if(year_diff>=3 && mon_diff>=0 && mon_diff>=0 &&day_diff>=0)
// 	{
// 		printf("\n\nEmployee with more than 3 years of service:");
// 		printf("\nEmp . ID  : %d",Employees[n].EmpCode);
// 		printf("\nEmp . Name: %s",Employees[n].Name);
// 	    printf("\n\nPeriod of Service: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);
// 	}
// 	}
	
// }
/*Question 6*/
// #include <stdio.h>
// #include <string.h>
// struct library{
// 	int accessionNumber;
// 	char title[10];
// 	char authname[10];
// 	int price;
// 	int flag;
// };
// void sorting(int n, struct library books[]){
// 	int i,j,min;
// 	struct library temp;
// 	for(i=0;i<n;i++){
// 		min=i;
// 		for(j=i+1;j<n;j++){
// 			if(books[j].accessionNumber<books[min].accessionNumber){
// 				min=j;
// 			}
// 		}
// 		temp=books[i];
// 		books[i]=books[min];
// 		books[min]=temp;
// 	}
// }
// int main(){
// 	struct library books[50];
// 	int totalbooks=0;
// 	int index=-1;
// 	int choice=-1;
// 	int i;
// 	int accessionnumbertr;
// 	char authnametr[25];
// 	char titletr[25];
// 	while(choice!=7){
// 		printf(" 1.Add book information\n");
// 		printf(" 2.Display book information\n");
// 		printf(" 3.List all books of given author\n");
// 		printf(" 4.List the title of specified book\n");
// 		printf(" 5.List the count of books in the library\n");
// 		printf(" 6. List the books in the order of accession number\n");
// 		printf(" 7. Exit\n");     
// 		printf("Your choice: ");
// 		scanf("%d",&choice);
// 			if(choice==1){
// 			printf("Enter the book accession number: "); 
// 			scanf("%d",&books[totalbooks].accessionNumber);
// 			fflush(stdin);
// 			printf("Enter the book title: "); 
// 			scanf("%s",books[totalbooks].title);
// 			printf("Enter the book author: "); 
// 			scanf("%s",books[totalbooks].authname);
// 			printf("Enter the book price: "); 
// 			scanf("%d",&books[totalbooks].price);
// 			books[totalbooks].flag=-1;
// 			while(books[totalbooks].flag!=1 && books[totalbooks].flag!=0){
// 				printf("Is the book issued? 1- yes, 0 - no: "); 
// 				scanf("%d",&books[totalbooks].flag);
// 			}
// 			totalbooks++;
// 			printf("\n\nA new book has been added successfully.\n\n");
// 		}else if(choice==2){
// 		if(totalbooks==0){
// 				printf("\nThe library is empty.\n\n");
// 			}else{
// 				index=-1;
// 				printf("Enter the book accession number to display: "); 
// 				scanf("%d",&accessionnumbertr);
// 				for(i=0;i<totalbooks;i++){
// 					if(books[i].accessionNumber==accessionnumbertr){
// 						index=i;
// 					}
// 				}
// 				if(index!=-1){
// 					printf("\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
// 					printf("%-20d%-20s%-20s%-20.2d%-20d\n\n",books[index].accessionNumber,books[index].title,books[index].authname,books[index].price,books[index].flag);
// 				}else{
// 					printf("\nThe book does not exist.\n\n");
// 				}
// 			}
// 		}else if(choice==3){
// 			if(totalbooks==0){
// 				printf("\nThe library is empty.\n\n");
// 			}else{
// 				fflush(stdin);
// 				printf("Enter the book author to list: "); 
// 				gets(authnametr);
// 				index=-1;
// 				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
// 				for(i=0;i<totalbooks;i++){
// 					if(strcmp(books[i].authname,authnametr)==0){
// 						index=i;
// 						printf("%-20d%-20s%-20s%-20.2d%-20d\n",books[i].accessionNumber,books[i].title,books[i].authname,books[i].price,books[i].flag);
// 					}
// 				}
// 				if(index==-1){
// 					printf("\nThe books do not exist.\n\n");
// 				}
// 			}
// 		}else if(choice==4){
// 			if(totalbooks==0){
// 				printf("\nThe library is empty.\n\n");
// 			}else{
// 				fflush(stdin);
// 				printf("Enter the book title to list: "); 
// 				gets(titletr);
// 				index=-1;
// 				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
// 				for(i=0;i<totalbooks;i++){
// 					if(strcmp(books[i].title,titletr)==0){
// 						index=i;
// 						printf("%-20d%-20s%-20s%-20.2d%-20d\n",books[i].accessionNumber,books[i].title,books[i].authname,books[i].price,books[i].flag);
// 					}
// 				}
// 				if(index==-1){
// 					printf("\nThe books do not exist.\n\n");
// 				}
// 			}
// 		}else if(choice==5){
// 			if(totalbooks==0){
// 				printf("\nThe library is empty.\n\n");
// 			}else{
// 				printf("\nThe total number of books in the library: %d\n\n",totalbooks);
// 			}
// 		}else if(choice==6){
// 			if(totalbooks==0){
// 				printf("\nThe library is empty.\n\n");
// 			}else{
// 				sorting(totalbooks,books);
// 				printf("\n\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book author","Book price","Book is issued");
// 				for(i=0;i<totalbooks;i++){
// 					printf("%-20d%-20s%-20s%-20.2d%-20d\n",books[i].accessionNumber,books[i].title,books[i].authname,books[i].price,books[i].flag);
// 				}
// 			}
// 		}else if(choice==7){
			
// 		}else{
// 			printf("Wrong choice.\n\n");
// 		}


// 	}

// }
// /*question 7*/
#include<stdio.h>
struct date
{
int day;
int month;
int year;
};

int main()
{
struct date d1,d2;

printf("Enter first date(dd/mm/yyyy)");
scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
printf("Enter second date(dd/mm/yyyy):");
scanf("%d%d%d",&d2.day,&d2.month,&d2.year);

if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
printf("0");
else
printf("1");

}