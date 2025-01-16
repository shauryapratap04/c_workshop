#include<stdio.h>
int main()
{
	FILE *fp;
	char a[]="kuch bhi likh do jo mann kre lmao\n";
	fp=fopen("emp.txt","w");
	if(fp==NULL)
{
		printf("file not found");
	return 1;
}	fprintf(fp,"%s",a);
	fclose(fp);
	fp=fopen("emp.txt","a");
	if(fp==NULL)
{
		printf("file not found");
		return 1;
	}
	fprintf(fp,"print text of file\n");
	char ch;
	while(ch=fgetc(fp)!=EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}