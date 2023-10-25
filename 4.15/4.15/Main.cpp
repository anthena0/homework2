#include <stdio.h>

int main() {
	double principal = 5000.0;
	int years = 15;

	

	for (int rate = 100; rate <= 120; rate += 5) {
		double balance = principal;

		printf("%.1f%%", rate / 10.0);

		for (int year = 1; year <= years; year++) {
			double interest = balance * rate / 1000.0;  // 利息 = 本金 * 年利率
			balance += interest;
			printf("\t%d\t%.2f\n", year, balance);
		}
	}

	return 0;
}