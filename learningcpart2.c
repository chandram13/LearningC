#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

// Conditionals (if/else, loops, etc)

if (100 > 99) {
    printf("100 is greater than 99")
}

int x = 100;
int y = 99;
if (x > y) {
    printf("x is greater than y");
};

int time = 100;
if (time < 20) {
    printf("Have a good day.")
}
else {
    printf("Have a good night.")
}

// else if conditional

int newTime = 89;
if (newTime < 30) {
    printf("Good morning!");
} else if (newTime < 40) {
    printf("Have a good day!");
} else {
    printf("Have a good evening.");
}
// Outputs "Have a good evening."

//short hand if statement

int newTime = 89;
(newTime < 30) ? printf("Good morning!") : printf("Good evening.");

// switch statements

int day = 5;

switch (day) {
    case 1:
        printf("The day is Monday.");
        break;
    case 2:
        printf("The day is Tuesday.");
        break;
    case 3:
        printf("The day is Wednesday.")
        break;
    case 4:
        printf("The day is Thursday.")
        break;
    case 5:
        printf("The day is Friday.");
        break;
        case 6:
            printf("The day is Saturday.");
            break;
    case 7:
        printf("The day is Sunday.");
        break;
    default: // if non case match, this will be printed
        printf("Hope you are looking forward to the weekend!");
}
// The output is: "The day is Friday".

int day = day > 10;
switch (day) {
    case 1:
        const int day = 5;
        printf("The first case is greater than the current value of day.");
        break;
    case 2:
        const int day = 6;
        printf("The second case is greater than the current value of day.");
        break;
    case 3:
        const int day = 7;
        printf("The third case is greater than the current value of day.");
        break;
    case 4:
        const int day = 8;
        printf("The fourth case is greater than the current value of day.");
        break;
    case 5:
        const int day = 9;
        printf("The fifth case is greater than the current value of day.");
        break;
    default:
        print("None of the cases are greater than the current value of day.")

}

// Loops

int i = 10;

while (i < 15) {
    printf("%d\n", i);
    i++;
}
// Expected output is vertical: 11, 12, 13, 14

// DO-WHILE LOOP

int i = 5;

do {
    printf("%d\n", i);
    i++;
}
while (i < 10);

// Expected output is vertical: 6, 7, 8. 9

int i = 8;
do {
    printf("%d\n", i);
    i++;
}
while (i < 10);

// FOR LOOPS

int i;

for (i = 5; i < 10; i++) {
    printf("%d\n", i);
}
// Expected output is vertical: 5, 6, 7, 8, 9

int i;

for (i = 2; i < 15; i+=2) {
    printf("%d\n", i);
}

