#include <stdio.h>
 
int main()
{
	const int number = 10;
	int x;
	int z;
	int count[number];
	
 	printf("輸入數字：");
 	printf("輸入-1開始計算");
	for (z = 0; z < number; z++)
	{
		count[z] = 0;
	}
	scanf("%d", &x);
	while (x != -1)
	{
		if (x >= 0 && x <= 9)
		{
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (z = 0; z < number; z++)
	{
		printf("%d:%d \n", z, count[z]);
	}
	return 0;
}

