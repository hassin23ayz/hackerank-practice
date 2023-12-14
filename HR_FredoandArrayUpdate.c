#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	// printf("Input number is %d.\n", num);       // Writing output to STDOUT



	if( (num>=1) && (num<=100000) )
	{

		int* pArr = (int*) calloc(num, sizeof(int));
		int tmp = -1;
		int64_t inputSum = 0;

		for(int i=0; i<num; i++)
		{
			scanf("%d", &tmp);
			if( (tmp>=1) && (tmp<=1000) )
			{
				pArr[i] = tmp;
				inputSum = inputSum + tmp;
				// printf("%d ",tmp);
			}
		}
		// printf("\n\r");
		// all inputs are taken

		//take each number from the pArr & multiply it with num to get total sum 
		//then compare this sum with inputSum 
		//now if this indexedSum is greater than the inputSum then keep the element as it is 
		//if this indexed sum is less than the inputSum then change the pArr element to 9999 

		int64_t indexedSumNow = 0;
		for(int i=0; i<num; i++)
		{
			indexedSumNow = pArr[i] * num;
			if(indexedSumNow > inputSum)
			{
				; //no change on element 
			}
			else 
			{
				pArr[i] = 9999;
			}
		}
		//now after loop is complete ,
		// take one element of the pArr and compare with all others remaining to see if it is the smallest
		int finalNum = pArr[0];
		for(int i=0; i<num; i++)
		{
			int elemNow = pArr[i];
			for(int j=(i+1); j<num; j++)
			{
				if(elemNow < pArr[j])
				{
					if(elemNow < finalNum)
					{
						finalNum = elemNow;
					}
				}
			}
		}
		free(pArr);
		printf("%d", finalNum);
	}

}


