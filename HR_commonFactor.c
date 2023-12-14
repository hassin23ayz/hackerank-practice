#include <stdio.h>
#include <math.h>

int main(){
	int n1;
	int n2;

	scanf("%d", &n1);              	                  // Reading input from STDIN
	scanf("%d", &n2);
	
	// printf("Input number is %d.\n", num);       // Writing output to STDOUT

	if(  (n1 <= pow(10,12)) && (n2 <= pow(10,12)) )
	{
		int maxDiv = n1;
		if(n2 > n1)
		{
			maxDiv = n2;
		}


		int noOfCommonFactors = 0;
		for(int divNow = 1; divNow <= maxDiv; divNow++)
		{
			if( ((n1 % divNow)==0) && ((n2%divNow)==0)  )
			{
				noOfCommonFactors++;
			}
		}

		printf("%d", noOfCommonFactors);
	}
	else
	{
		printf("1");
	}