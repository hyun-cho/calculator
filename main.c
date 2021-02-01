#include <stdio.h>
 
double add(double, double);
double sub(double, double);
double div(double, double);
double multi(double, double);
 
int main(int argc, char* argv[])
{
	double number1, number2, result;
	char operator;
	
	printf("Please enter a expression: ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
double add(double number1, double number2)
{
	//TODO implementation
	return number1+number2;
}
 
double sub(double number1, double number2)
{
    return number1 - number2;
}
 
double multi(double number1, double number2)
{
	//TODO implementation
	return number1 * number2;
}
 
double div(double number1, double number2)
{
    if (number2 == 0) {
        fprintf(stderr, "div 0 error\n");
        exit(1);
    }

    return number1 / number2;
}
