#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char number[11];
} Person;

int main(void) {
    Person phoneBook[20] = {
        {.name = "Aaditya Verma", .number = "9988776655"},
        {.name = "Arnav Sagar", .number = "9142621505"},
        {.name = "Bhavna Gupta", .number = "8877665544"},
        {.name = "Deepak Singh", .number = "7766554433"},
        {.name = "Dilip Kumar Sharma", .number = "7779922318"},
        {.name = "Kanishka Sharma", .number = "0987654321"},
        {.name = "Manish Tiwari", .number = "6655443322"},
        {.name = "Neha Jha", .number = "5544332211"},
        {.name = "Pooja Patel", .number = "4433221100"},
        {.name = "Rahul Yadav", .number = "3322110099"},
        {.name = "Ram Kumar", .number = "9889889889"},
        {.name = "Rani Sharma", .number = "6206183909"},
        {.name = "Rohan Kumar", .number = "1122334455"},
        {.name = "Sanjana Kumari", .number = "3344556677"},
        {.name = "Shubham Kumar", .number = "0099887766"},
        {.name = "Shyaam Kumar", .number = "7788990099"},
        {.name = "Sneha Das", .number = "2211009988"},
        {.name = "Sohan Kumar", .number = "1234567890"},
        {.name = "Vikram Raj", .number = "1100998877"},
        {.name = "Zoya Khan", .number = "0099887766"}};
    string userInput;

    while (1) {
        userInput = get_string("Name: ");
        if (strcmp(userInput, "exit") == 0) {
            break;
        }
        int low = 0;
        int high = sizeof(phoneBook) / sizeof(phoneBook[0]) - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cmp = strcmp(userInput, phoneBook[mid].name);
            if (cmp == 0) {
                printf("Name: %s, Number: %s\n", phoneBook[mid].name,
                       phoneBook[mid].number);
            }
            if (cmp < 0) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }
    return 0;
}
