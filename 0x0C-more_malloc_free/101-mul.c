#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_input(char *num1, char *num2);
int multiply(char *num1, char *num2);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_valid_input(argv[1], argv[2])) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);

    printf("%d\n", result);

    return 0;
}

int is_valid_input(char *num1, char *num2) {
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            return 0;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            return 0;
        }
    }

    return 1;
}

int multiply(char *num1, char *num2) {
    int len1 = 0, len2 = 0;
    while (num1[len1] != '\0') {
        len1++;
    }
    while (num2[len2] != '\0') {
        len2++;
    }

    int *result = calloc(len1 + len2, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i+j+1];
            result[i+j] += sum / 10;
            result[i+j+1] = sum % 10;
        }
    }

    int res = 0;
    for (int i = 0; i < len1 + len2; i++) {
        if (result[i] != 0 || res != 0) {
            res = res * 10 + result[i];
        }
    }

    free(result);

    return res;
}
