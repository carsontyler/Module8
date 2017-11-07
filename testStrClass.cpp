#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString s1 = "Who knows nothing doubts nothing";
    cout << "s1 = "; s1.display();

    s1.updateString("Now this is what I call music");
    cout << "Now s1 = "; s1.display();

    return 0;
}