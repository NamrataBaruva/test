#include <stdio.h>
#include <stdlib.h>

int add(int n1, int n2)
{
int result = n1 + n2;
return result;
}


int main(int argc, char * argv[])
{
int result;
int num1 =atoi(argv[1]);
int num2 = atoi(argv[2]);

result = add(num1, num2);
printf("%d",result);

return EXIT_SUCCESS;
}