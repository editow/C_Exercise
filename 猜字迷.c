#include<stdio.h>				//²Â×ÖÃÔ
#define ANSWER "grant"
#include<string.h>
#define MAX 40
int main()
{
	char try[MAX];
	puts("Who is buried in Grant's tomb?");
	gets(try);
	while (strcmp(try, ANSWER))
	{
		puts("No,that's wrong . try again.");
		gets(try);
	}
	puts("That's tight!");
	return 0;
}