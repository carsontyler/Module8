#include <iostream>
#include <cstring>
using namespace std;

/*
 * new -> request memory
 * delete -> memory
 * Work with pointers
 */
int main()
{
    char *str = "Waldo is the best mascot in Utah";
    int len = strlen(str);

    char *ptr;                                              // Makes a pointer to char
    ptr = new char[len+1];                                  // Set aside memory: string + '\0' (NULL character). EVERY NEW MUST HAVE A DELETE

    strcpy(ptr, str);
    cout << "Original: " << str << endl;
    cout << "Copy: " << ptr << endl;

    delete[] ptr;                                           // Releases ptr's memory. [] because it's an allocated array

    return 0;
}