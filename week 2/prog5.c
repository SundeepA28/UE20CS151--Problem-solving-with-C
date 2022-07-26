#include<stdio.h>
int main()
{
    char operator;
    int op1;int op2;
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c",&operator);
    printf("Enter the operands\n");
    scanf("%d%d",&op1,&op2);
    switch(operator)
    {
        case '+':
        printf("%d + %d = %d\n",op1,op2,op1+op2);
        break;

        case '-':
        printf("%d - %d = %d\n",op1,op2,op1-op2);
        break;

        case '*':
        printf("%d X %d = %d\n",op1,op2,op1*op2);
        break;

        case '/':
        printf("%d / %d = %d\n",op1,op2,op1/op2);
        break;

	default:
	printf("ERROR !! operator is not correct");

    }
    return 0;
}