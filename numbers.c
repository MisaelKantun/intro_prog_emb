#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the first number\n ");
    scanf("%d", &A);
    printf("Enter the second number\n ");
    scanf("%d", &B);
    printf("Enter the third number\n ");
    scanf("%d", &C);
	if (A >= B && A >= C)
    
		printf(" the largest number is = %d\n", A);
	if (B >= A && B >= C)
		printf(" the largest number is = %d\n", B);

	if (C >= A && C >= B)
		printf(" the largest number is = %d\n", C);


  

	return 0;
}
