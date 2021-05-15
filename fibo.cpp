#include <stdio.h> 
int fibonacci(int age)
{
	int N1 = 0;
	int N2 = 1;
	int Sum =0;
	int n = 0;
	while (N2 < age)
	{
		Sum = Sum + N2;
		n = N2;
		N2 = N1 + N2;
		N1 = n;
	}
	printf("The sum of all fibonacci numbers less than your age = %d\n",Sum);
	return Sum;
}
void binary(int num)
{
	int c;
	printf("\nThe binary representation of sum is ");
	int n = 16;
	while(n >= 0)
    {
        c = num >> n;
        if(c & 1)
		printf("1");
	else
		printf("0");
	n--;
	}
	printf("\n");
}
int main()
{
        int age;
	printf("please insert your age :");
	scanf("%d",&age);
	binary(fibonacci(age));
	printf("\n");
	return age;

} 
