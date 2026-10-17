#include <stdio.h>

typedef struct {
    char name[50];
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
        printf("Name: %s, Level: %d\n", guild[i].name, guild[i].level);
    }
    return 0;
}

void sortPlayers(Player arr[], int size) { return; }
