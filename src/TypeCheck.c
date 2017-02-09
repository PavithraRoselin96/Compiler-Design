/*
 ============================================================================
 Name        : TypeCheck.c
 Author      : Pavithra Roselin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char*type (char[],int);
void main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	char a[10], b[10], mess[20], mess1[20];
	int i,l;
	printf("\n\n int a,b;\n\n int c=a+b; \n");
	printf("\n\n Enter a value for a: \n");
	scanf("%s", a);
	l = strlen(a);
	printf("\n a is: ");
	strcpy(mess, type(a,l));
	printf("%s", mess);
	printf("\n\n Enter a value for b \n\n");
	scanf("%s", b);
	lstrlen(b);
	printf("\n b is: ");
	strcpy(mess1, type(b,l));
	printf("%s", mess1);
	if(strcmp(mess, "int") == 0 && strcmp (mess1, "int" == 0))
	{
		printf("\n\n No Type Error");
	}
	else
	{
		printf("\n\n Type Error");
	}
		getch();
}
char* type(char x[],int m)
	{
	int i;
	char mes[20];
	for(i=0;i<m;i++)
		if(isalpha(x[i]))
		{
			strcpy(mes,"AlphaNumeric");
			return mes;
		}
		else if(x[i]=='.')
		{
			strcpy(mes,"float");
			return mes;
		}
	strcpy(mes,"int");
	return mes;
}


