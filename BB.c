#include<stdio.h>
int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("반복할 횟수입력:");
	scanf("%d",&tot_rep);
	
	i=0;
	while(i<tot_rep)
	{
		printf("문자와 횟수입력:");
		getchar();
		scanf("%c %d", &ch,&rep);
		j =0;
		while(j < rep)
		{
			printf("%C",ch);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;   
}









