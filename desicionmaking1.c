#include <stdio.h>

int main()
{
    int ch, rechargeAmount, discount, totalAmount;
    printf("Enter the Recharge Amount:");
    scanf("%d", &rechargeAmount);
    printf("1.GPay.\n2.Phone Pe.\n3.Axis Bank.\n4.Other Payment method\nEnter your Payment method:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        discount = 100;
        break;
    case 2:
        discount = 50;
        break;
    case 3:
        discount = 200;
        break;
    default:
        discount = 0;
        break;
    }
    totalAmount = rechargeAmount - discount;
    printf("Total anount to be Paid:%d.\n", totalAmount);
    printf("Total Discount:%d", discount);
}