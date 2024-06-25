/*question 3*/
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define BUFFER_SIZE 1000

// void replaceAll(char *, const char *, const char *);

// int main(int argc, char *argv[]){
// 	char old_word[15], new_word[15], file[15], buffer[BUFFER_SIZE];
// 	int i, k;
// 	FILE *fp, *ft;
// 	if(argc!=4){
// 		puts("improper number of arguments");
// 		exit(1);
// 	}
// 	strcpy(old_word, argv[1]);
//     strcat(old_word, " ");
// 	strcpy(new_word, argv[2]);
//     strcat(new_word, " ");
// 	strcpy(file, argv[3]);
	
// 	printf("%s %s %s\n", new_word, old_word, file);
// 	fp = fopen("myfile.txt", "r");
// 	ft = fopen("temp1.txt", "w+");
// 	if(fp==NULL){
// 		printf("cant't open file\n"); exit(1);
// 	}
	
//     while ((fgets(buffer, BUFFER_SIZE, fp)) != NULL)
//     {

//         replaceAll(buffer, old_word, new_word);

//         fputs(buffer, ft);
//     }
// 	fclose(fp); fclose(ft);
// 	if(remove(file)!=0){
// 		printf("error deleting file\n"); 
// 	}
// 	if(rename("temp1.txt", file)!=0){
// 		printf("error renaming file\n"); 
// 	}
// 	printf("Done");
// 	return 0;
// }

// void replaceAll(char *str, const char *oldWord, const char *newWord){
//     char *pos, temp[BUFFER_SIZE];
//     int index = 0;
//     int oldlen;

//     oldlen = strlen(oldWord);
//     if (!strcmp(oldWord, newWord)) {
//         return;
//     }

//     while ((pos = strstr(str, oldWord)) != NULL)
//     {
//         strcpy(temp, str);
//         index = pos - str;
//         str[index] = '\0';
//         strcat(str, newWord);
//         strcat(str, temp + index + owlen);
//     }
// }
/*question 4*/
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(int ac, char *av[]){
// 	int i, a, b;
// 	a = b = 0;
// 	if (ac != 4){
// 		puts("Wrong number of arguements");
// 		printf("\n.Write like this : ");
// 		printf("\"calc\" \"switch\"");
// 		printf("\"number 1\" \"number 2\"\n");
// 		exit(1);
// 	}
// 	for (i = 0; av[2][i] != '\0'; i++){
// 		//Converting av[2][i] string into numeric and saving in "a".
// 		a *= 10;
// 		a = av[2][i] - 48;
// 	}
// 	for (i = 0; av[3][i] != '\0'; i++){
// 		//Converting av[3][i] string into numeric and saving in "b".
// 		b *= 10;
// 		b = av[3][i] - 48;
// 	}
// 	switch (av[1][0]){
// 		case '+':
// 			printf("%d %c %d = %d", a, av[1][0], b, a + b);
// 			break;
// 		case '-':
// 			printf("%d %c %d = %d", a, av[1][0], b, a - b);
// 			break;
// 		case '/':
// 			printf("%d %c %d = %.2f", a, av[1][0], b,  (float)a/b );
// 			break;
// 		case '*':
// 			printf("%d %c %d = %d", a, av[1][0], b, a * b);
// 			break;
// 		case '%':
// 			printf("%d %c %d = %d", a, av[1][0], b, a % b);
// 			break;
// 		case '<':
// 			if (a < b)
// 				printf("%d %c %d is True.", a, av[1][0], b);
// 			else
// 				printf("%d %c %d is False.", a, av[1][0], b);
// 			break;
// 		case '>':
// 			if (a > b)
// 				printf("%d %c %d is True.", a, av[1][0], b);
// 			else
// 				printf("%d %c %d is False.", a, av[1][0], b);
// 			break;
// 		case '=':
// 			if (a == b)
// 				printf("%d %c %d is True.", a, av[1][0], b);
// 			else
// 				printf("%d %c %d is False.", a, av[1][0], b);
// 			break;
// 		default:
// 			printf("Operator '%c' is not found.\n", av[1][0]);
// 	}
// 	getch();
// 	return 0;
// }