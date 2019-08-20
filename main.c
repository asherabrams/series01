#include <stdio.h>
#include <process.h>
#include <math.h>

int main(int argc, char **argv)
{
	printf("hello series\n");
int a = 1;
int b = 0;
int c = 0;
int n = 1;
for(n = 1; n <= 10; n++)
{
a = n;
b = pow(n,2);
c = b + c;
printf("%i : %i : %i\n", a, b, c);
    }

	system("pause");
	return 0;
}
