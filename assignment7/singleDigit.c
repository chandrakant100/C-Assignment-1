#include<stdio.h>
int main()
{
	int num, temp, rem, sum = 0, count = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;

	START:
	while(temp)
	{
		rem = temp % 10;
		sum += rem;
		count++;
		temp /= 10;
	}

	if(count != 1)
	{
		count = 0;
		temp = sum;
		sum = 0;
		goto START;
	}
	else
		printf("\n%d after reduction to a single digit is now %d\n", num, sum);

	return 0;
}
