#include <stdio.h>
 
int main()
{
	char name[60];
	float Basic, HRA_Per, DA_Per, HRA, DA, Gross_Salary,age;
	
	printf("\n Please Enter the Employee Name  :  ");
  	gets(name);
  	
  	printf("\n Please enter age of Employee : ");
  	scanf("%f",&age);
  	
	printf(" Please Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &Basic);
  
	printf(" Please Enter the HRA Percentage of an Employee  :  ");
  	scanf("%f", &HRA_Per);
  	
	printf(" Please Enter the DA Percentage of an Employee  :  ");
  	scanf("%f", &DA_Per);
	    	
  	HRA = Basic * (HRA_Per /100); 
	DA = Basic * (DA_Per / 100);  	

	Gross_Salary = Basic + HRA + DA;
	printf("\n Name = %s \n Basic Salary = %.2f \n HRA Amount   = %.2f \n DA Amount   = %.2f \n Gross Salary = %.2f", name, Basic, HRA, DA, Gross_Salary); 
	
  	return 0;
}