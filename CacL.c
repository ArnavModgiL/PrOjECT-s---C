#include<stdio.h>
#include<stdlib.h>

int main() {
    double num1, num2, result;
    char operation, choice;


    printf("\n --- PROFESSIONAL CALCULATOR ---\n");

    do{
        printf("\nEnter First Number: ");
        scanf("%lf",&num1);

        printf("Enter an Operator( + | - | * | / ): ");
        scanf(" %c",&operation);

        printf("Enter Second Number: ");
        scanf("%lf",&num2);


        switch (operation) {
            case '+' :
                result = num1 + num2;
                printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            
            case '-' :
                result = num1 - num2;
                printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '*' :
                result = num1 * num2;
                printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case '/' :
                if( num2 != 0){
                    result = num1 / num2;
                    printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("\nError: Division by zero is not allowed!\n");
                }
                break;

            default :
                printf("\nInvalid operator! Please use only +, -, *, /\n");
        }

        printf("\n Do you want to perform another calculation ? - (Y/N): ");
        scanf(" %c",&choice);

    } while( choice == 'Y' || choice == 'y');

    printf("\n--- Thank You using Calculator!\n");

    return 0;

}