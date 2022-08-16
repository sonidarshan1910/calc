#include<stdio.h>
#include<conio.h>
#include<math.h>

	int main()
	{
		char op;
		int num1,num2;
		clrscr();

		printf("Enter an operator(+ ,- ,*,/):");
		scanf("%c",&op);

		printf("Enter first digit:");
		scanf("%d",&num1);

		printf("Enter second digit:");
		scanf("%d",&num2);

		switch(op)
		{

			case '+':
				printf("Addition : %d\n",num1+num2);
				break;

			case '-':
				printf("Subtraction : %d\n",num1-num2);
				break;

			case '*':
				printf("Multiplication : %d\n",num1*num2);
				break;

			case '/':
				printf("Division : %d\n",num1/num2);
				break;

			default:
				printf("error! operator is wrong");

		}
			return 0;
	}
