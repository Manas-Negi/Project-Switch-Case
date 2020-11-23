#include<stdio.h>
int main()
{
	int a;
	printf("Please enter a number from 1 to 5 and you shall be provided with a food item to order\n");
	//asking byte to enter the number
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			    printf("Food Item - Pizza\n Price - Rs 239");
			break;
		case 2:
				printf("Food Item - Burger\n Price - Rs 129");
			break;
		case 3:
		    	printf("Food Item - Pasta\n Price - Rs 179");
			break;
		case 4:
				printf("Food Item - French Fries\n Price - Rs 99");
			break;
		case 5:
				printf("Food Item - 	Sandwich\n Price - Rs 149");
			break;
		default:
			    printf("Invalid Choice");
			break;
	}
	
	return 0;
}
