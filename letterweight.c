#include <stdio.h>

int main()
{
    int weight;
    float amountPaid;
    printf("Enter the weight of the letter :");
    scanf("%d", &weight);
    if (weight < 50)
    {
        amountPaid = 0.5 * (weight / 10);
    }
    else if (weight > 50 && weight < 100)
    {
        amountPaid = 0.5 * 5 + 0.4 * ((weight - 50) / 10);
    }
    else if (weight > 50 && weight < 250)
    {
        amountPaid = 0.5 * 5 + 0.4 * 10 + 0.25 * ((weight - 150) / 10);
    }
    else if (weight > 400)
    {
        amountPaid = 0.5 * 5 + 0.4 * 10 + 0.25 * 25 + 0.25 * ((weight - 400) / 1000);
    }

    printf("Postage amount to be paid : %f .", amountPaid);
}