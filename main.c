#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
	int min;

	scanf("%d", &min);

	if  (min<=500)
	{
		printf ("350");
	}
	else 
	{
		printf ("%d", 350+(min - 500)*2);
	}


return 0;
}

