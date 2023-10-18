#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("File tidak dapat dibuka.\n");
        return 1;
    }

    int id;
    char firstName[50];
    char lastName[50];
    double amount;

    printf("ID\tFirst Name\tLast Name\tAmount\n");
    while (fscanf(file, "%d %s %s %lf", &id, firstName, lastName, &amount) != EOF) {
        printf("%d\t%s\t%s\t%.2lf\n", id, firstName, lastName, amount);
    }

    fclose(file);

    return 0;
}
