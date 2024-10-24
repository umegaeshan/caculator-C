#include <stdio.h>
#include <math.h>

int main() {
    float ans;
    float history[100];  // Array to store history of results
    int run;

    printf("Insert Run count = ");
    scanf("%d", &run);

    for(int j = 0; j < run; j++) {
        printf("\n");
        printf("*****************************\n");
        printf("\n-------  Operations--------\n");
        printf("Addition \t->  1\n");
        printf("Subtraction \t->  2 \n");
        printf("Multiplication \t->  3\n");
        printf("Division \t->  4\n");
        printf("Power    \t -> 5\n");
        printf("History   \t  -> 6 \n");
        printf("\n******************************\n");

        printf("\n");

        float num1;
        printf("Insert Number 1: ");
        scanf("%f", &num1);

        if (num1 == 6) {
            printf("History: \n");

            for (int i = 0; i < j; i++) {
                printf("%d: %.2f\n", i + 1, history[i]);
            }

            continue;
        }

        float num2;
        printf("Insert Number 2: ");
        scanf("%f", &num2);

        int operation;
        printf("\nSelect your operation (Ex: 1): ");
        scanf("%d", &operation);

        switch(operation) {
            case 1:
                ans = num1 + num2;
                break;
            case 2:
                ans = num1 - num2;
                break;
            case 3:
                ans = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    ans = num1 / num2;
                } else {
                    printf("Error: Division by zero.\n");
                    continue;
                }
                break;
            case 5:
                ans = pow(num1, num2);
                break;
            case 6:
                printf("History: \n");

                for (int i = 0; i < j; i++) {
                    printf("%d: %.2f\n", i + 1, history[i]);
                }
                continue;
            default:
                printf("Invalid operation.\n");
                continue;
        }

        printf("Answer is: %.2f\n\n", ans);
        history[j] = ans;
    }

    return 0;
}
