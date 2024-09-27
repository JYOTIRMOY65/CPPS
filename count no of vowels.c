//Program Name: C program to count the number of vowels present in a sentence
//Date: 27/09/2024	Author: Jyotirmoy Bhuyan

#include<stdio.h>
main()
{
	char st[100], ch;
	int count = 0, i;
	printf("Enter the sentence\n");
	gets(st);
		for(i = 0; i < strlen(st); i++)
			switch(st[i])
			{
				case'A' :
				case'E' :	
				case'I' :	
				case'O' :	
				case'U' :	
				case'a' :	
				case'e' :	
				case'i' :	
				case'o' :	
				case'u' :count++;
				break;
			}
	printf("%d vowels are present in the sentence", count);
}
