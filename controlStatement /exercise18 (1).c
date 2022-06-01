#include<stdio.h>
int main(){

	int number, positive=0,negative=0;
	float average, total, count;
	
	do{
		//enter number
    	printf("Please enter number = ");
		scanf("%d",&number);
		total +=number;
		
		count++;
		if(number > 0)
		{
			positive++;
		}
		else if(number<0)
		{
			negative++;
		}
	 }
	while(number != 0);
		//compute average
	average = total/count;
		//output value
		printf("number of positive = %d\n",positive);
		printf("number of negative = %d\n",negative);
		printf("number of average  = %.2f\n",average);
	return 0;
}