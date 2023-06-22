#include "3-calc.h"


int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *s;

	int (*operation)(int, int);
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	s = argv[2];
	if (strcmp(s, "*") != 0 && strcmp(s, "-") != 0 && strcmp(s, "+") != 0 && strcmp(s, "/") != 0 && strcmp(s, "%") != 0)
	{
		printf("Error");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(s, "/") == 0 && num2 == 0) || (strcmp(s, "%") == 0 && num2 == 0))
	{
		printf("Error");
		exit(100);
	}
	operation = get_op_func(s);
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
