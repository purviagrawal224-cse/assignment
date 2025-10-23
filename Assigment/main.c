#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

// #Cp

int main() {
    int choice;

    do {
        printf("\n========== MAIN MENU ==========\n");
        printf("1. Number Operations (Armstrong / Adams / Prime Palindrome)\n");
        printf("2. Array Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("\nProgram exited successfully.\n");
            break;
        }

        switch (choice) {
            case 1: {
                int sub, num;
                printf("\n--- Number Operations ---\n");
                printf("1. Check Armstrong Number\n");
                printf("2. Check Adams Number\n");
                printf("3. Check Prime Palindrome Number\n");
                printf("Enter your choice: ");
                scanf("%d", &sub);

                printf("Enter a number: ");
                scanf("%d", &num);

                if (sub == 1)
                    printf(isArmstrong(num) ? "%d is an Armstrong number.\n" : "%d is not an Armstrong number.\n", num);
                else if (sub == 2)
                    printf(isAdams(num) ? "%d is an Adams number.\n" : "%d is not an Adams number.\n", num);
                else if (sub == 3)
                    printf(isPrimePalindrome(num) ? "%d is a Prime Palindrome number.\n" : "%d is not a Prime Palindrome number.\n", num);
                else
                    printf("Invalid subchoice.\n");
                break;
            }

            case 2: {
                int n, arr[100], subChoice;
                printf("\nEnter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr[i]);

                do {
                    printf("\n--- Array Operations ---\n");
                    printf("1. Display Elements\n");
                    printf("2. Find Max Index\n");
                    printf("3. Find Min Index\n");
                    printf("4. Find Average\n");
                    printf("5. Reverse Array\n");
                    printf("6. Sort Array\n");
                    printf("7. Search Element\n");
                    printf("8. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch (subChoice) {
                        case 1:
                            showArray(arr, n);
                            break;
                        case 2:
                            printf("Max element index: %d\n", getMaxIndex(arr, n));
                            break;
                        case 3:
                            printf("Min element index: %d\n", getMinIndex(arr, n));
                            break;
                        case 4:
                            printf("Average value: %.2f\n", computeAverage(arr, n));
                            break;
                        case 5:
                            flipArray(arr, n);
                            printf("Array reversed.\n");
                            showArray(arr, n);
                            break;
                        case 6:
                            arrangeArray(arr, n);
                            printf("Array sorted.\n");
                            showArray(arr, n);
                            break;
                        case 7: {
                            int val;
                            printf("Enter value to search: ");
                            scanf("%d", &val);
                            int index = searchValue(arr, n, val);
                            if (index != -1)
                                printf("Value found at index %d.\n", index);
                            else
                                printf("Value not found.\n");
                            break;
                        }
                        case 8:
                            printf("Returning to main menu...\n");
                            break;
                        default:
                            printf("Invalid option.\n");
                    }
                } while (subChoice != 8);
                break;
            }

            default:
                printf("Invalid main menu option.\n");
        }

    } while (choice != 3);

    return 0;
}
