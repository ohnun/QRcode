
/* d2b.c */
/* This program is to translate DEC to BIN. */

#include<stdio.h>
int main(void) {
	int bins[100] = { 0 };	/* Set the values of stack are all 0. */
	int i = 0;	/* index of bins[100] */

	int dec = 0;
	int bin = 0;
	int dec_cp = 0;

	printf_s("输入一个十进制整数:\n");
	scanf_s("%d", &dec);

	/* part of calculate */
	do {
		dec_cp = dec;
		bins[i] = dec_cp % 2;
		i++;	/* Remember to set a warn to tell user the stack has been full. */
		dec /= 2;
	} while (dec_cp / 2 != 0);

	/* part of print */
	printf_s("该数的二进制表达为:\n");
	for (; i != 0; i--)
		printf_s("%d", bins[i - 1]);

	return 0;
}