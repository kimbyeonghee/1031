#include<stdio.h>
int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("반복할 횟수 입력:");
	scanf("%d",&tot_rep);
	for(i=0;i<tot_rep;i++)
	{
		printf("문자와 횟수 입력");
		scanf(" %c %d",&ch,&rep);
		j=0;
		while(j<rep){
			printf("%c",ch);
			j++;
		}
		printf("\n");
	}
}
