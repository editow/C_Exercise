#include<stdio.h>	//增加字符-代码（课本）
#include<stdlib.h>
#define MAX 40
int main(void)
{
	FILE *fp;
	char words[MAX];
	if ((fp = fopen("words.txt", "a+")) == NULL){
		fprintf(stdout, "Can't open \"word\" file .\n");
		exit(1);
	}
	puts("Enter words to add");
	while (gets(words) != NULL&&words[0] != '\0')
		fprintf(fp, "%s", words);
	puts("File contents");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	return 0;
}