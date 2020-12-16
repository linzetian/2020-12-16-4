//在屏幕上打印杨辉三角。
//       1            1
//      1 1           1 1
//     1 2 1          1 2 1
//    1 3 3 1         1 3 3 1
#include<stdio.h>
#define COLUMN 10
#define ROW 10
int main()
{
	int arr[COLUMN][ROW] = { 0 };
	int i = 0;
	int j = 0;
	for(i=0;i<COLUMN;i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < COLUMN; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-3d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}