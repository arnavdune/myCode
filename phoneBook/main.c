#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char number[11];
} Person;

int main(int argc, char *argv[]) {
    Person phoneBook[10] = {
        {"Arnav Sagar", "9142621505"},        {"Rani Sharma", "6206183909"},
        {"Dilip Kumar Sharma", "7779922318"}, {"Ram Kumar", "9889889889"},
        {"Sohan Kumar", "1234567890"},        {"Kanishka Sharma", "0987654321"},
        {"Rohan Kumar", "1122334455"},        {"Shubham Kumar", "0099887766"},
        {"Sanjana Kumari", "3344556677"},     {"Shyaam Kumar", "7788990099"},
    };
    string userInput;
    while (1) {
        userInput = get_string("Name: ");
        if (strcmp(userInput, "exit") == 0) {
            break;
        }
        for (int i = 0; i < 10; i++) {
            if (strcmp(userInput, phoneBook[i].name) == 0) {
                printf("%d. %s: %s\n", i + 1, phoneBook[i].name,
                       phoneBook[i].number);
            }
        }
    }
    return 0;
}
