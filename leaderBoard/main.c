
#include <stdio.h>

typedef struct {
    char name[20];
    int level;
} Player;

void sortPlayers(Player arr[], int size);

int main() {
    Player guild[10] = {
        {.name = "Rohan", .level = 42},   {.name = "Arnav", .level = 99},
        {.name = "Zoya", .level = 15},    {.name = "Kanishka", .level = 88},
        {.name = "Vikram", .level = 64},  {.name = "Sneha", .level = 27},
        {.name = "Aaditya", .level = 73}, {.name = "Pooja", .level = 51},
        {.name = "Manish", .level = 10},  {.name = "Deepak", .level = 36}};

    int size = sizeof(guild) / sizeof(guild[0]);

    sortPlayers(guild, size);

    for (int i = 0; i < size; i++) {
        printf("Name: %s\tLevel: %d\n", guild[i].name, guild[i].level);
    }
    return 0;
}

void sortPlayers(Player arr[], int size) {
    for (int x = 0; x < (size - 1); x++) {
        for (int i = 0; i < (size - x - 1); i++) {
            if (arr[i].level > arr[i + 1].level) {
                Player tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}
