#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Simple calculator\n");
	printf("Enter operand1, operand2, operator\n");
	printf("Operator: 1=plus, 2=minus, 3=mul, 4=div\n\n");

	printf("Enter input1:\n");
	scanf("%d",&a);
	printf("Enter input2:\n");
	scanf("%d",&b);
	printf("Enter operator:\n");
	scanf("%d",&c);

    if (c == 1)
 	 printf("The result is = %d\r\n",a+b);
    else if (c == 2)
 	 printf("The result is = %d\r\n",a-b);
    else if (c == 3)
 	 printf("The result is = %d\r\n",a*b);
    else if (c == 4)
 	 printf("The result is = %d\r\n",a/b);
    else
 	 printf("Invalid operator\r\n");

	return 1;
}
