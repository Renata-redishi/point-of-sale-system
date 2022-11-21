#include<stdio.h>

void main(void)
{
	int choice, qty;
	float  price, amt, totalAmt, vat, cash, change;
	char addAnother;
	do {
	system("cls");
	printf ("\n***Winter Shop***\n\n");
	printf ("Item 		Price\n");
	printf ("1. Maize Flour \t\tPhp 110\n");
	printf ("2. Rice \t\tPhp 100\n");
	printf ("3. sugar\t\tPhp 120\n");
	printf ("4. salt \t\tPhp 10\n");

	printf ("\nEnter your option\t: ");
	scanf ("%d", &choice);
	printf ("\nEnter your quantity\t: ");
	scanf ("%d", &qty);

	switch (choice)
	{
	case 1: price = 110;
			break;
	case 2:  price = 100;
			break;
		break;
	case 3:  price = 120;
			break;
		break;
	case 4:  price = 10;
			break;
		break;

		printf("You can only enter options 1, 2, 3 or 4 only");
	}
		amt = price * qty;
		printf("\nAmount: %.2f", amt);

		vat = amt * 0.16;
		printf("\nVAT: %.2f", vat);

		totalAmt = totalAmt + amt + vat;
		printf("\nTotal AMOUNT: %.2f", totalAmt);

		printf ("\nAdd Another Order (y/n)?");
		addAnother == getche();
	} while(addAnother == 'y' || addAnother == 'Y');

	do {
		printf("\nCash Tendered\t: ");
		scanf("%f", & cash);
	}while(cash < totalAmt);


	change = cash - totalAmt;
	printf("\nChange is:\t\t %.2f", change);
	printf("\n\nThank You! Come Again");

}
//default: system("cls");
