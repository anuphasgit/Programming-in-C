/*
* Author : Anup BHattarai
* Date : Sun 04 Feb 2024 11:58:24 PM MST
* Description: This program simulates an invoice generator for services provided by Davy's auto shop. 
* It prompts the user to input two service phrases and calculates the total cost based on the selected services.
* If a service phrase is "-", it treats it as no service.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    const int MAX_WORD_LENGTH = 40;
    char servicePhrase1[MAX_WORD_LENGTH + 1];
    char servicePhrase2[MAX_WORD_LENGTH + 1];

    printf("Davy's auto shop services\n");
    printf("Oil change -- $35\n");
    printf("Tire rotation -- $19\n");
    printf("Car wash -- $7\n");
    printf("Car wax -- $12\n");

    printf("\nEnter first service: ");
    if (scanf("%40[^\n]%*c", servicePhrase1) != 1) {
        printf("Error: Unable to parse input\n");
        return 1;
    }

    if (strcmp(servicePhrase1, "-") == 0) {
        strcpy(servicePhrase1, "No service");
    }

    printf("Enter second service: ");
    if (scanf("%40[^\n]%*c", servicePhrase2) != 1) {
        printf("Error: Unable to parse input\n");
        return 1;
    } else if (strcmp(servicePhrase2, "") == 0 || strcmp(servicePhrase2, "\n") == 0) {
        printf("Error: No input provided for the second service\n");
        return 1;
    }

    if (strcmp(servicePhrase2, "-") == 0) {
        strcpy(servicePhrase2, "No service");
    }

    printf("\nDavy's auto shop invoice\n");

    printf("Service 1: %s", servicePhrase1);
    if (strcmp(servicePhrase1, "Oil change") == 0) {
        printf(", $35\n");
    } else if (strcmp(servicePhrase1, "Tire rotation") == 0) {
        printf(", $19\n");
    } else if (strcmp(servicePhrase1, "Car wash") == 0) {
        printf(", $7\n");
    } else if (strcmp(servicePhrase1, "Car wax") == 0) {
        printf(", $12\n");
    } else if (strcmp(servicePhrase1, "No service") == 0) {
        printf(", $0\n");
    } else {
        printf("Error: Requested service is not recognized\n");
        return 1;
    }

    printf("Service 2: %s", servicePhrase2);
    if (strcmp(servicePhrase2, "No service") == 0) {
        printf(", $0\n");
    } else if (strcmp(servicePhrase2, "Oil change") == 0) {
        printf(", $35\n");
    } else if (strcmp(servicePhrase2, "Tire rotation") == 0) {
        printf(", $19\n");
    } else if (strcmp(servicePhrase2, "Car wash") == 0) {
        printf(", $7\n");
    } else if (strcmp(servicePhrase2, "Car wax") == 0) {
        printf(", $12\n");
    } else {
        printf("Error: Requested service is not recognized\n");
        return 1;
    }

    int totalCost = 0;
    if (strcmp(servicePhrase1, "Oil change") == 0) {
        totalCost += 35;
    } else if (strcmp(servicePhrase1, "Tire rotation") == 0) {
        totalCost += 19;
    } else if (strcmp(servicePhrase1, "Car wash") == 0) {
        totalCost += 7;
    } else if (strcmp(servicePhrase1, "Car wax") == 0) {
        totalCost += 12;
    }

    if (strcmp(servicePhrase2, "Oil change") == 0) {
        totalCost += 35;
    } else if (strcmp(servicePhrase2, "Tire rotation") == 0) {
        totalCost += 19;
    } else if (strcmp(servicePhrase2, "Car wash") == 0) {
        totalCost += 7;
    } else if (strcmp(servicePhrase2, "Car wax") == 0) {
        totalCost += 12;
    }

    printf("\nTotal: $%d\n", totalCost);

    return 0;
}