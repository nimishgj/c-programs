#include <stdio.h>

int main()
{
    float principle, rate, CI;
    int n, i;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%d", &n);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Compound intrest ,\n");

    for (i = 0; i < n; i++)
    {
        CI = principle * (1 + rate / 100);
        principle = CI;
        printf("After %d years : %f .\n", i, CI);
    }
    return 0;
}