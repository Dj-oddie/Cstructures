#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 12;
    struct KenyanRoad kenyanRoads[arraySize];

    // Add Kenyan roads to the array
    addKenyanRoads(kenyanRoads, arraySize);

    // Print the structure elements
    printKenyanRoads(kenyanRoads, arraySize);

    return 0;
}

