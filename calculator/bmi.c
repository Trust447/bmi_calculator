#include <stdio.h>

/**
 * main - starting point of execution
 *
 * Return: always return 0 on success 
 */

int main()
{
	/*declaring variables*/
	double height;
	double weight;
	double bmi;
	char choice;

	/*welcome user user*/
	printf("Body Mass Index Calculator\n");
	printf("Please enter the following information\n");
	printf("\n");
	
	while (choice != 'q')
	
	{	
		/*prompt user*/
		
		/*HEIGHT*/
		printf("height(m): ");
		scanf("%lf", &height);
		printf("you are %.2lfm tall\n", height);

		/*WEIGHT*/
		printf("weight(kg): ");
		scanf("%lf", &weight);
		printf("your weight is %.2lfkg\n", weight);

		/*make some calculations*/
		bmi = weight / (height * height);

		/*print the BMI of the use*/
		printf("your Body Mass Index is approximately %.2lf\n", bmi);

		/*underweight*/
		if (bmi <= 18.4)
		{
			if (bmi >= 16 && bmi <= 16.9)
				printf("You are moderately underweight\n");

			else if (bmi >= 17 && bmi <= 18.4)
				printf("You are mildly underweight\n");

			else 
				printf("You are severely underweight\n");
		}

		/*normal weight*/
		else if (bmi >= 18.5 && bmi <= 24.9)
			printf("your weight is normal\n");
		
		/*over weight*/
		else if (bmi >=25)
		{
			if (bmi >= 25 && bmi <= 29.9)
				printf("You are overweight or pre-obese\n");

			else if (bmi >= 30 && bmi <= 34.9)
				printf("Class I obesity\n");

			else if (bmi >= 35 && bmi <= 39.9) 
				printf("Class II obesity\n");

			else 
				printf("Class III obesity\n");	
		}


		printf("press any key to continue or 'q' to quit\n");
		scanf(" %c", &choice);
		
		
		
	}	
	printf("Thanks!\n");

	return (0);
}
