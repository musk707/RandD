#include<iostream>

using namespace std;

int main(){

    int *ptr = NULL;


    ptr = new int[10]; // Dynamically allocate an array of 10 integers
    if (ptr == NULL) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 2;
    }

    // Print the values
    for (int i = 0; i < 10; i++) {
        cout << "Value at index " << i << ": " << ptr[i] << endl;
    }
    // Deallocate the memory
    delete[] ptr;
    return 0;
}