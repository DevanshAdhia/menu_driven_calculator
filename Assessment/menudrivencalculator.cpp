#include <stdio.h>
main() 
{
    int choice, num1, num2, result;

    do 
	{
        printf("\n--- MENU ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) 
		{
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        switch (choice) 
		{
            case 1:
                result = num1 + num2;
                printf("Result = %d\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result = %d\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result = %d\n", result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error! Division by zero.\n");
                else 
				{
                    result = num1 / num2;
                    printf("Result = %d\n", result);
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } 
	while (choice != 5);
}
