

// Function to add two numbers
double add(double a, double b);

// Function to subtract two numbers
double subtract(double a, double b);

// Function to multiply two numbers
double multiply(double a, double b);




// Implementation of the calculator module

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}


#include <stdio.h>
#include <math.h>


int main() 
{
    double num1, num2;
    int operation,n;
	
    // Get input from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
	printf("Enter the numer to select the operation \n1: addition \n2: subtraction \n3: multiplication \n4: division \n5: square root\n6: exponentiation \n7: Trigonometry");
	printf("\n");
	scanf("%d",&operation);
	
   	if(operation<5)
   	{
	   	printf("Enter the second number: ");
	    scanf("%lf", &num2);
	}
	switch (operation) 
	{
		        case 1:
		            printf("Result: %.2lf\n", add(num1, num2));
		            break;
		        case 2:
		            printf("Result: %.2lf\n", subtract(num1, num2));
		            break;
		        case 3:
		            printf("Result: %.2lf\n", multiply(num1, num2));
		            break;
		        case 4:
		        	if (num2 != 0||num1==0) 
					{
		        	printf("Result: %.2lf\n",num1/num2);
		        	}
		        	else
		        	{
		        		printf("Division by zero is not allowed");
					}
		            break;
		        case 5:
		        	printf("Result: %.2lf\n",sqrt(num1));
		        	break;
		        case 6:
		        	printf("Result: %.2lf\n",exp(num1));
		        	break;
		        case 7:
		        	printf("select trigonometric function to convert: \n1:sin \n2:cos \n3:tan \n4:cosec \n5:sec \n6:cot");
					printf("\n");
					scanf("%d",&n);
					switch (n)
					{
						case 1:
							printf("sin(%lf)=%lf",num1,sin(num1));
							break;
						case 2:
							printf("cos(%lf)=%lf",num1,cos(num1));
							break;
						case 3:
							printf("tan(%lf)=%lf",num1,tan(num1));
							break;			
						case 4:
							printf("cosec(%lf)=%lf",num1,1/sin(num1));
							break;
						case 5:
							printf("sec(%lf)=%lf",num1,1/cos(num1));
							break;
						case 6:
							printf("cot(%lf)=%lf",num1,1/tan(num1));
							break;
						default:
		            		printf("Invalid input.\n");
		            		break;
					}	
		        	break;
		        default:
		            printf("Invalid input.\n");
		            break; 
	   		}
	   		
    return 0;
}
