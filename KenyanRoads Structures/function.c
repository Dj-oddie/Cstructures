#include <stdio.h>
#include "function.h"

void addKenyanRoads(struct KenyanRoad *kenyanRoadsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Kenyan Road %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", kenyanRoadsArray[i].name);
        printf("Classification: ");
        scanf("%s", kenyanRoadsArray[i].classification);
        printf("Origin: ");
        scanf("%s", kenyanRoadsArray[i].origin);
        printf("Length (in kilometers): ");
        scanf("%f", &kenyanRoadsArray[i].length);
        printf("Year Completed: ");
        scanf("%d", &kenyanRoadsArray[i].yearCompleted);
    }
}

void printKenyanRoads(struct KenyanRoad *kenyanRoadsArray, int arraySize) {
    printf("\nKenyan Road Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Kenyan Road %d:\n", i + 1);
        printf("Name: %s\n", kenyanRoadsArray[i].name);
        printf("Classification: %s\n", kenyanRoadsArray[i].classification);
        printf("Origin: %s\n", kenyanRoadsArray[i].origin);
        printf("Length: %.2f kilometers\n", kenyanRoadsArray[i].length);
        printf("Year Completed: %d\n", kenyanRoadsArray[i].yearCompleted);
    }
}

