//basics
#include <iostream>
#include <vector>
#include <fstream>
#include <memory>
#include <map>
#include <set>
using namespace std;

int main() {
    cout << "Welcome to C++ Basics!" << endl;
    // Example of basic arithmetic operation
    int a = 5;
    int b = 10;
    int sum = a + b;
    cout << "The sum is: " << sum << endl;
    // Example of a simple loop
    for (int i = 0; i < 5; ++i) {
        cout << "Loop iteration: " << i << endl;
    }
    // Example of a conditional statement
    if (sum > 10) {
        cout << "The sum is greater than 10." << endl;
    } else {
        cout << "The sum is 10 or less." << endl;
    }
    // Example of a function
    auto greet = []() {
        cout << "Hello from a lambda function!" << endl;
    };
    greet();
    // Example of a vector
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Vector contents: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // Example of a string
    string message = "C++ is fun!";
    cout << message << endl;
    // Example of a simple class
    class SimpleClass {
    public:
        void display() {
            cout << "This is a simple class." << endl;
        }
    };
    SimpleClass obj;
    obj.display();
    // Example of a pointer
    int* ptr = &a;
    cout << "Value pointed by ptr: " << *ptr << endl;
    // Example of a reference
    int& ref = b;
    cout << "Value of b through reference: " << ref << endl;
    ref = 20; // Changing b through reference
    cout << "New value of b: " << b << endl;
    // Example of a constant
    const int constantValue = 100;
    cout << "Constant value: " << constantValue << endl;
    // Example of a dynamic memory allocation
    int* dynamicArray = new int[5];
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }
    cout << "Dynamic array contents: ";
    for (int i = 0; i < 5; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray; // Freeing dynamically allocated memory
    // Example of exception handling
    try {
        throw runtime_error("An error occurred");
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    // Example of a smart pointer
    unique_ptr<int> smartPtr(new int(42));
    cout << "Value in smart pointer: " << *smartPtr << endl;
    // Example of a range-based for loop
    vector<string> fruits = {"Apple", "Banana", "Cherry"};
    cout << "Fruits: ";
    for (const auto& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    // Example of a map
    map<string, int> fruitCount = {{"Apple", 5}, {"Banana", 3}, {"Cherry", 8}};
    cout << "Fruit counts: ";
    for (const auto& pair : fruitCount) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;
    // Example of a set
    set<string> uniqueFruits = {"Apple", "Banana", "Cherry", "Apple"};
    cout << "Unique fruits: ";
    for (const auto& fruit : uniqueFruits) {
        cout << fruit << " ";
    }
    cout << endl;
    // Example of a tuple

    tuple<int, string, double> myTuple(1, "C++", 3.14);
    cout << "Tuple contents: " << get<0>(myTuple) << ", " << get<1>(myTuple) << ", " << get<2>(myTuple) << endl;
    // Example of a pair
    pair<int, string> myPair(10, "Ten");
    cout << "Pair contents: " << myPair.first << ", " << myPair.second << endl;
    // Example of a file operation
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Writing to a file in C++." << endl;
        outFile.close();
        cout << "File written successfully." << endl;
    } else {
        cerr << "Unable to open file for writing." << endl;
    }
    // Example of reading from a file
    ifstream inFile("output.txt");
    if (inFile.is_open()) {
        string line;
        cout << "Reading from file:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Unable to open file for reading." << endl;
    }
    return 0;
}