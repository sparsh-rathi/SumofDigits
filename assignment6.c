#include<stdio.h>
int DigitSum(int N);

int main()
{
	int N , sum;
	printf("Input number to find the sum of digts: ");
	scanf("%d",&N);
	
	sum = DigitSum(N);
	
	printf("Sum of digits of %d = %d\n", N, sum);
	
	return 0;
}

	int DigitSum(int N)
{
    if(N == 0)
        return 0;
         
    return ((N % 10) + DigitSum(N / 10));
}
	
