#include <stdio.h>


int main() {
    printf("Hello, World!\n");
    return 0;
}


int main() {
    printf("see this as first example");
    return 0;
}

int main() {
    printf("see as second example");
    return 0;
};
//
int main() {
    printf("see as third\n");
    printf("third thing coming up");
    return 0;
}
// create blank line
int main() {
    printf("welcome to the fourth example\n\n");
    printf("this is fourth example continued");
    return 0;
}

// create horizontal tab
int main(){
    printf("welcome to the fifth\t");
    printf("this is fifth continued");
    return 0;
}


// insert backslash character
int main(){
    printf("welcome to the sixth\\");
    printf("this is sixth continued");
    return 0;
}


// insert a double quote character (THIS IS SINGLE LINE COMMENT)
int main() {
    printf("insert double quote\"");
    printf("keep going");
    return 0;
}

/* creating a multiple line comment */
 printf("see this is multi line");

 // creating variables
 int myNum = 18;
 myNum = 15; // example of reassigning int value
 float myFl = 10.8;
 char Ada = "m";

 // producing outputs from variables

int myNew = 21; // single int variable
float myF = 10.8;
char myL = "f";
printf("%d\n", myNew);
printf("%f\n", myF);
printf("%c\n", myL);

// combine text and var
int myDew = 12
printf("My least favorite number is: %d", myDew");

// using more than one var

int mySec = 35;
char myLetnew = 'l';
printf("My favorite variables are %d and %c", mySec, myLetnew );

// Add variables
int x = 12;
int z = 24;
int sum = x +z;
printf("%d",sum);

\* this is a multiline comment */

// adding multiple vars
a = 5, b = 8, c = 12;
printf("%d", a + b + c);

// constants, values don't change
const int MYBANK = 500;
const float CURRENTTEMP = 89.9;
const char EULER = 'e';

// adding vars
int sum1 = 100 + 100;
int sum2 = sum1 + 400;
int sum3 = sum2 + sum2;

// changing var values
int chanNum = 120;
chanNum += 10;
printf("%d",chanNum);

int x = 5;
int y = 3;
printf("%d", x > y);

// operator size
int x;
float myF;
double myDouble;
char Euler;

printf("%lu\n", sizeof(int));
printf("%lu\n",sizeof(myF);
printf("%lu\n", sizeof(myDouble");
print("%lu\n)", sizeof(Euler);

// For Loop

int i;

for (i = 0; i < 10; i++) {
    printf("%d\n", i);
}

// another example

int i;

for(i = 0; i <= 100; i = i + 10) {
    printf("%d\n", i)
    // break
    // continue
}

// Arrays
int concertTickets[]= {10, 30, 60, 99};

printf("&d", concertTickets[0])

// replacing a value

concertTicket[1] = 31;
printf("%d",concertTickets[0]);

// for loop

int concertTickets[] = {10, 30, 60, 99};

for {i = 0; i < 10; i++)
printf("%d\n", concertTickets[i])


for{i = 0; i < 10; i++};
printf("%d\n",concertTickets[1]);

// making strings
char traveling[] = "Bon Voyage!";
printf("%s", traveling);

// accessing strings
printf("%c", traveling[1]);

traveling[1] = 'E';
printf("%s", traveling); // outputs "Eon Voyage!"

printf("%lu\n", sizeof(traveling);

// User Input

int myVar
printf(" This is my current name" myVar);
scanf("%d", &myVar);

printf("Your number is: %d going to be", myVar);

// Memory address

int mySerial = 101;
printf{"%p", &mySerial};

// Pointers
int mySerial = 102;
int * ptr = &mySerial;

print("%p\n", mySerial"); // output value
print("%d\n", &mySerial") // output pointer address
print("%p\n", ptr); // outputs value and pointer address

// Deference
// int mySerial = 102;
// int* ptr = &mySerial;
// print("%d\n", *ptr); // outputs value and pointer address

// Functions
void myFunction() {
    // execute code
}
// function parameters
void myFunction(char name[], int birthday[]) {
print("Hello %s. My birthday is %d\n.", name, birthday};
}

int main(); {
    myFunction("Clarisse", 2000);
    muFunction("Damian", 2002);
    myFunction("Sally", 2003");
return 0;
}

// To generate outputs avoid void in front of function name

int reTwo(int b, int c);
    return b + c;
}

int main() {
    printf("Result is: %d, reTwo(4,8)");
    return 0;
}

// function declaration
// structure
void myFunction(){
    // declaration body (definition)
};

// First example
void firstFunction();

// main method
int main() {
    firstFunction();
    return 0;
}

// Function declaration

void firstFunction() {
    printf("This declaration has been recognized!");
}

// recursion

//  math functions, first deckare with "#include <math.h>

// square root
printf("%f",sqrt(64));

// Rounding
printf("%f", ceil(11.90));
printf("%f", floor(6.3));

// Power
printf(%f, pow(5, 10));

// returns the value of E^x
printf(%f, exp(13));

// Structures

struct MyFirst {
    float myDec;
    int firstNum;
};

int main{
    struct firstStructure(s1);
    return 0;
};

// Access structure members
struct secondStructure {
    float twoDec;
    int secondNum;
};

int main() {
    struct secondStructure s1;
}

// Assign values to defined s1
s1.twoDec = 18.2;
s2.secondNum = 100;

// print normally
printf("My second decimal: %d\n":,s1.twoDec);
printf("My second number is: %d\n":, s1.secondNum);
return 0;
// alternative
printf("My second decimal is\n",twoDec);
printf("My second number is\n", secondNum);
return 0;

// multiple structs
// struct firstStruct s1;
// struct secondStruct s2;
// s1.twoDec = 5.9;
// s1.secondNum = 50;

// s2.twoDec = 65.0;
// s2.secondNum = 55;

// Strings in structure
struct strStruct {
    float twoDec;
    int secondNum;
    char anAlphabet[26];
};

int main() {
    struct strStruct s1 = {11,24, "Z"};
    printf('%v,''%d','%c', s1.twoDec, s1.secondNum, s1.anAlphabet);

    return 0;
}
// copy structures
// struct firstStruct s1;
// struct secondStruct s2;
// s2 = s1;


