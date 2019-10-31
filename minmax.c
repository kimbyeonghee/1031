#include<stdio.h>
#include<limits.h>
int main()
{
 	//printf("%d %d\n",INT_MIN,INT_MAX);
	int min = INT_MAX,max=INT_MIN,number;
	
	printf("정수를 입력하세요(끝은 ^Z를 누르면 됩니다):");
	while(scanf("%d",&number)!=EOF)
	{
		if(number < min)
		min = number;
		if(number > max)
		max = number;
	}
	if(min=INT_MAX)
	printf("입력한 숫자가 없습니다.");
	else
	printf("입력한 수 둘 중에 최소값=%d,최대값 =%d입니다.\n",min,max);
	
	return 0;
}
