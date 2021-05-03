#include <stdio.h>
int fibonacci(int age)
{
	if (age == 0)
		{
		return(0);
		}

	int n1 = 0;
	int n2 = 1;
	int sum = 2;
	int b = 0;
	while (n2 < age)
	{
		b = n1;
		n1 = n2;
		n2 = b + n2;
		sum = sum + n2;
	}
	printf("The sum of all fibonacci numbers less than your age = %d/n",sum);
	return sum;
}
void binary(int num)
{
	int c;
	scanf("%d", &num);
	int b = 32;
	while(b >= 0)
    {
        c = num >> b;
        if(c & 1)
            printf("1");
        else
            printf("0");
        b--;
    }
}

int main()
{
        int age;
	printf("please insert your age :");
	binary(fibonacci(age));
	fibonacci(age);

} 
