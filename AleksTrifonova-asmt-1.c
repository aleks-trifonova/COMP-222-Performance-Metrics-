//Aleks (Aleksandra) Trifonova (* Aleksandra is my full name which is probably what it is on your roster)
//Assignment 1, comp 222 Tuesday Thursday 

#include <stdio.h>

/* declare global var's */
int cycletotal = 0;
int instrtotal = 0;
int numclasse = 0;
int instrcount =0;
int machinefrequency = 0;
/*********************************************************/
void OPTION1()
{
	int i = 0; 
	int cpi_class = 0;
/* declare local var's and initialize*/

/* prompt for # instruction classes & frequency of machine */
printf("Please enter the number of classes: ");
scanf("%d", &numclasses);

printf("Enter the machines frequency in MegaHertz: ");
scanf("%d", &machinefrequency);

printf("\n");
/* for each instruction class, prompt for CPI of class and instruction count, accumulate cycle total & instruction total */
for(i =1; i <= numclasses; i++){
	printf("Please enter CPI of class %d: ",i);
	scanf("%d", &cpi_class);
	printf("Please enter the instruction count of the class %d: ", i);
	scanf("%d", &instrcount);
	cycletotal += (cpi_class * instrcount);
	instrtotal += instrcount;
}
return;
}

/*********************************************************/
void OPTION2()
{
/* declare local var's */
float averagecpi = 0;

/* calculate CPI average */
averagecpi = (float)(cycletotal)/instrtotal;
printf("\n");

/* Note: typecast integers to floats via (float)int_var */

/* Print out result */
  printf("The average CPI of the series is: %.2f", averagecpi);
  printf("\n");
return;
}

/*********************************************************/
void OPTION3()
{
/* declare local var's */
float executiontime;
/* calculate total execution time */
executiontime = (float)(cycletotal)/(float)(machinefrequency) * 1000.0;
/* Print out result */
printf("The total time of the CPU sequence is: %.2f milliseconds\n", executiontime);

return;
}

/*********************************************************/
void OPTION4()
{
/* declare local var's */
float MIPS = 0;
float averagecpi = 0;
/* calculate MIPS */
averagecpi = (float)(cycletotal)/instrtotal;

MIPS = (machinefrequency/averagecpi) * 1.0;


/* Print out result */

printf("The total MIPS of the series is\n: %.2f", MIPS);
return;
}

/*********************************************************/

int main()
{
/* declare local var's */
int choice = 0;
printf("This is the perfromance metrics calculator \n");
/* until user chooses to quit, print menu, select choice via switch statement and call appropriate function*/
while(choice != 5){
	printf("Menu options \n");
	printf("-----------------\n");
	printf("1. Enter Parameters\n");
	printf("2. calculatethe average CPI of the series of instructions\n");
	printf("3. Calculate the total execution time of a series of instructions\n");
	printf("4.Calculate the MIPS of a series of instructions\n");
	printf("5. Quit program\n");
	printf("\n");
	printf("Please enter your selection\n");
	scanf("%d", &choice);

	switch(choice){
		case 1:
			OPTION1();
			break;
	
		case 2: 
			OPTION2();
			break;
	
		case 3: 
			OPTION3();
			break;
	
		case 4: 
			OPTION4();
			break;
	default:
 printf("Not valid, please try again"); 
	
}//switch statement

}//while for choice
return 1;
}//end of main 
