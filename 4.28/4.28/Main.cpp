#include <stdio.h>

int main() {
	int paycode;
	
	while (1) {
		double weeklyPay = 0.0;

		printf("paycode (1=managers, 2=hourly workers, 3=mission workers, 4=company workers, -1 end): ");
		scanf("%d", &paycode);

		if (paycode == -1) {
			break; 
		}

		switch (paycode) {
		case 1:
		
			printf("weeklyPay: ");
			scanf("%lf", &weeklyPay);

			break;

		case 2:
		
			double hourlyWage, hoursWorked;
			printf("hourlyWage: ");
			scanf("%lf", &hourlyWage);
			printf("hoursWorked: ");
			scanf("%lf", &hoursWorked);

			if (hoursWorked <= 40) {
				weeklyPay = hourlyWage * hoursWorked;
			}
			else {
				weeklyPay = hourlyWage * 40 + (hoursWorked - 40) * hourlyWage * 1.5;
			}
			break;

		case 3:
		
			double sales;
			printf("sales: ");
			scanf("%lf", &sales);
			weeklyPay = 250 + 0.0579 * sales;
			break;

		case 4:
			
			double itemPrice, itemCount;
			printf("itemPrice: ");
			scanf("%lf", &itemPrice);
			printf("itemCount: ");
			scanf("%lf", &itemCount);
			weeklyPay = itemPrice * itemCount;
			break;

		default:
			printf("Please input paycode or -1.\n");
			break;
		}

		printf("weeklyPay: $%.2f\n", weeklyPay);
	}

	return 0;
}