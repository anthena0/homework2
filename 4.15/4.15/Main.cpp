#include <stdio.h>

int main() {
	double principal = 5000.0;
	int years = 15;

	

	for (int rate = 100; rate <= 120; rate += 5) {
		double balance = principal;

		printf("%.1f%%", rate / 10.0);

		for (int year = 1; year <= years; year++) {
			double interest = balance * rate / 1000.0;  // �Q�� = ���� * �~�Q�v
			balance += interest;
			printf("\t%d\t%.2f\n", year, balance);
		}
	}

	return 0;
}