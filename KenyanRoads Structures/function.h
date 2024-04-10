#ifndef FUNCTION_H
#define FUNCTION_H

struct KenyanRoad {
    char name[100];
    char classification[100];
    char origin[100];
    float length;
    int yearCompleted;
};

void addKenyanRoads(struct KenyanRoad *kenyanRoadsArray, int arraySize);
void printKenyanRoads(struct KenyanRoad *kenyanRoadsArray, int arraySize);

#endif

