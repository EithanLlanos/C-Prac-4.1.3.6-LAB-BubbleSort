//Scenario
//Write a program that sorts ten floating - point numbers in descending order.
//
//In this case, the data in the array is initialized(see code in the editor).After each execution of the inner loop, your program should print the values on the screen(with another small loop).You can use the "%.2f" format in the printf function.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//#include <stdio.h>
//
//int main()
//{
//	float numbers[10] = { 5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9 };
//	/* your code */
//	return 0;
//}
//
//Your version of the program must print the same result as the expected output.
//
//Expected output
//5.60 6.20 6.40 7.30 4.30 8.30 9.20 2.30 1.90 0.10
//6.20 6.40 7.30 5.60 8.30 9.20 4.30 2.30 1.90 0.10
//6.40 7.30 6.20 8.30 9.20 5.60 4.30 2.30 1.90 0.10
//7.30 6.40 8.30 9.20 6.20 5.60 4.30 2.30 1.90 0.10
//7.30 8.30 9.20 6.40 6.20 5.60 4.30 2.30 1.90 0.10
//8.30 9.20 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
//9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
//9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
//9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void)
{
	float numbers[10] = { 5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9 },v1=0;
	int sw=1;

	while (sw) {
		sw = 0;

		for (int i = 0; i < (sizeof(numbers) / 4) - 1; i++) {
			if (numbers[i] < numbers[i + 1]) {
				v1 = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = v1;
				sw = 1;
			}
		}
		for (int i = 0; i < sizeof(numbers)/4; i++) {
			printf("%.2f ", numbers[i]);
		}

		
		printf("\n");
	}
	

	return 0;
}