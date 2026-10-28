#include <stdio.h>
int main(){
    int MaxCapacity = 1000;
    int CurrentLevel;
    int TotalAdded;
    int Rejected;
    int attemps, liters;

    printf("Water Tank Capacity: %d liters\n", MaxCapacity);
    printf("How many water deliveries will be attempted?\n");
    printf("Deliveries attemp: ");
    scanf("%d", &attemps);

    for(int i = 1; i <= attemps; i++) {
        printf("Delivery #%d - Enter Liters to add: ", i);
        scanf("%d", &liters);

        int remaining = MaxCapacity - CurrentLevel;

        if (liters <= 0) {
            printf("REJECTED!\n");
            Rejected++;
        }else if (liters > remaining){
            printf("REJECTED!\n", remaining, liters);
            Rejected++;
        }else {
            CurrentLevel += liters;
            TotalAdded += liters;
            printf("ACCEPTED!\n");
        }

        printf("Current Water Level: %d / %d liters\n", CurrentLevel, MaxCapacity );

    }
    
    printf("========FINAL SUMMARY========\n");
    printf("Total Water Added: %d liters\n", TotalAdded);
    printf("Remaining Capacity: %d liters\n", MaxCapacity - CurrentLevel);
    printf("Rejected Deliveries: %d\n", Rejected);

    return 0;



}
