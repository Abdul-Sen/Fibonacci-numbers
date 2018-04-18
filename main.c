#include <stdio.h>
#include <stdlib.h>
void printFib (int maxNum);
int main()
{
    int user_input = 0;
    printf("Please enter that max number > ");
    scanf("%d", &user_input);  ///Gets the limit from user
    printFib(user_input);
}

void printFib (int maxNum)
{
    int num1= 0, num2 = 1, sum = 0;
    printf("\n %d\n %d", num1, num2);
    while (sum<=maxNum)
    {
        sum = num1 + num2;
        if (sum<maxNum)
            printf("\n %d",sum);
        num1 = num2;
        num2 = sum;
    }
}
