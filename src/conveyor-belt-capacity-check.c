#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount=0, totalPackageWeight=0;

    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

    if(totalPackageWeight <= motorCount*12) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
}
