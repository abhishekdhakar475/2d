# include <stdio.h>
int main()
{
	int h=0;
	int arr[2][2]={{11,24},{53,4}};
	for(int s=0; s<2; s++)
	{
		for(int j=0; j<2; j++)
		{
		h=h+arr[s][j];
		}
	}
	printf("%d",h);
}
