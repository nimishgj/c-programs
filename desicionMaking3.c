#include <stdio.h>

int main()
{

    int a, b, c;

    a = 5.54; //a will contain 5 as it is declared as int data type
              //If you want to print a as float then delcare it as float and change %d to %f in final printf statement
    b = a + 2;

    printf("Enter the value of c:");

    scanf("%d", &c);

    printf("%d %d %d\n", a, b, c);

    return 0;
}
