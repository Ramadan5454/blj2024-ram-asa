#include <stdio.h>

int main(void) {

    double zahl1;
    double zahl2;
    char operator[1];


    printf("Gebe eine Zahl ein: \n");
    scanf("%lf", &zahl1);

    printf("Gebe noch eine Zahl ein: \n");
    scanf("%lf", &zahl2);

    printf("Gebe einen Operator ein: \n");
    scanf(" %c", &operator);

    printf("\n\n");
   // printf("%lf %lf %c", zahl1, zahl2, operator);

    if (operator == '+') {
        printf("%lf + %lf = %lf", zahl1, zahl2, zahl1 + zahl2);
    }


    return 0;
}
