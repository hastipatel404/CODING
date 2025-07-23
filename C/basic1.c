#include<stdio.h>
#include<stdlib.h>
int square(int x) {
    return x * x;
}
inline int inlineSquare(int x) {
    return x * x;
}
int main() {
    //datatypes
    int a = 5;
    float b = 3.14f;
    char c = 'A';
    
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    
    //operators
    int sum = a + 10;
    printf("Sum: %d\n", sum);
    int product = a * 2;
    printf("Product: %d\n", product);
    int difference = a - 3;
    printf("Difference: %d\n", difference);
    int quotient = a / 2;
    printf("Quotient: %d\n", quotient);
    int remainder = a % 2;
    printf("Remainder: %d\n", remainder);
    //control structures
    if (a > 0) {
        printf("a is positive\n");
    } else {
        printf("a is not positive\n");
    }
    for (int i = 0; i < 5; i++) {
        printf("Loop iteration: %d\n", i);
    }
    while (a > 0) {
        printf("While loop, a: %d\n", a);
        a--;
    }
    //functions
    printf("Square of 5: %d\n", square(5));
    //arrays
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array element at index 2: %d\n", arr[2]);
    //pointers
    int *ptr = &a;
    printf("Pointer to a: %d\n", *ptr);
    //structures
    struct Point {
        int x;
        int y;
    };
    struct Point p1;
    p1.x = 10;
    p1.y = 20;
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);
    //unions
    union Data {
        int intValue;
        float floatValue;
        char charValue;
    };
    union Data d1;
    d1.intValue = 5;
    printf("Union integer value: %d\n", d1.intValue);
    d1.floatValue = 3.14f;
    printf("Union float value: %.2f\n", d1.floatValue);
    d1.charValue = 'C';
    printf("Union character value: %c\n", d1.charValue);
    //enums
    enum Color {
        RED,
        GREEN,
        BLUE
    };
    enum Color color = GREEN;
    printf("Selected color: %d\n", color);
    //type casting
    double d = (double)a / 2;

    printf("Type casted value: %.2f\n", d);
    //input/output
    printf("Enter an integer: ");
    int input;
    scanf("%d", &input);
    printf("You entered: %d\n", input);
    //file operations
    FILE *file = fopen("output.txt", "w");

    if (file != NULL) {
        fprintf(file, "Writing to file: %d\n", input);
        fclose(file);
        printf("Data written to file successfully.\n");
    } else {
        printf("Error opening file.\n");
    }
    //memory management
    int *dynamicArray = (int *)malloc(5 * sizeof(int));
    if (dynamicArray != NULL) {
        for (int i = 0; i < 5; i++) {
            dynamicArray[i] = i * 10;
            printf("Dynamic array element %d: %d\n", i, dynamicArray[i]);
        }
        free(dynamicArray);
    } else {
        printf("Memory allocation failed.\n");
    }
    //error handling
    if (input < 0) {
        fprintf(stderr, "Error: Negative input received.\n");
    } else {
        printf("Input is valid.\n");
    }
    //comments
    // This is a single line comment
    /* This is a 
       multi-line comment */
    //preprocessor directives
    #define PI 3.14159
    printf("Value of PI: %.5f\n", PI);
    //macros
    #define SQUARE(x) ((x) * (x))
    printf("Macro square of 4: %d\n", SQUARE(4));
    //bit manipulation
    int bitValue = 1 << 2; // Left shift
    printf("Bit manipulation result: %d\n", bitValue);
    //type definitions
    typedef unsigned long ulong;
    ulong largeNumber = 1000000;
    printf("Large number: %lu\n", largeNumber);
    //function pointers
    int (*funcPtr)(int) = square;
    printf("Function pointer result: %d\n", funcPtr(6));
    //static and extern variables
    static int staticVar = 10;
    extern int externVar;
    printf("Static variable: %d\n", staticVar);
    //extern variable definition
    int externVar = 20;
    printf("Extern variable: %d\n", externVar);
    //volatile keyword
    volatile int volatileVar = 30;

    printf("Volatile variable: %d\n", volatileVar);
    //const keyword
    const int constVar = 40;
    //inline functions
    //inline functions
    printf("Inline function square of 7: %d\n", inlineSquare(7));   
    //goto statement
    goto label;
label:
    printf("Goto statement executed.\n");
    //assertions
    #include <assert.h>
    assert(a > 0 && "a should be positive");
    printf("Assertion passed.\n");
    //type generic expressions
    const char *typeGeneric = _Generic(a, int: "Integer", float: "Float", char: "Character");
    printf("Type of a: %s\n", typeGeneric);
    //compound literals
    struct Point p2 = (struct Point){.x = 30, .y = 40};
    printf("Compound literal Point coordinates: (%d, %d)\n", p2.x, p2.y);
    //designated initializers
    struct Point p3 = {.x = 50, .y = 60};
    printf("Designated initializer Point coordinates: (%d, %d)\n", p3.x, p3.y);
    //restrict keyword
    int *restrict ptr1 = &a;
    printf("Restrict pointer value: %d\n", *ptr1);
    //thread-local storage
    #ifdef _THREAD_LOCAL
    _Thread_local int threadLocalVar = 100;
    printf("Thread-local variable: %d\n", threadLocalVar);
    #endif
    //atomic operations
    #include <stdatomic.h>
    atomic_int atomicVar = ATOMIC_VAR_INIT(0);
    atomic_fetch_add(&atomicVar, 1);
    printf("Atomic variable after increment: %d\n", atomicVar);
    //memory barriers
    #include <stdatomic.h>
    atomic_thread_fence(memory_order_seq_cst);
    printf("Memory barrier applied.\n");
    //function definition
    return 0;
}
