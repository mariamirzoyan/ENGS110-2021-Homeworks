#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;
	FILE *fdata;
	fdata = fopen("data.txt","r");
	int *data;
	data = (int*)malloc(50*sizeof(int));
	if (data == NULL)
{
		printf("Error with the txt file");
		exit(1);
}
	while (fscanf(fdata,"%d", data)!=EOF)
{
		sum = sum + *data;
}
	printf("%d\n", sum);
	fclose(fdata);
	fdata = fopen ("final.txt","w+");
	fprintf (fdata, "%d\n", sum);
	fclose(fdata);
	return 0;
}

