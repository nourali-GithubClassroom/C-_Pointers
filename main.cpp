// C program to illustrate Pointers
#include <stdio.h>
using namespace std;

void increment(int* p) {
    // Function implementation
}


int increment(int num)
{
  num = num + 1;
  return num;
}


void pointers()
{
    int var = 10;

    // declare pointer variable
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // *(ptr) = *(ptr) + 1;

    int newNum = increment(var);

    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
    printf("Value of newNUm: %d \n", newNum);
}

// Driver program
int main()
{
    pointers();
    return 0;
}