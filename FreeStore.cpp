#include <iostream>
#include "Resource.h"

using namespace std;

int main()
{
    {
        Resource localResource("local");
        string localString = localResource.getName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->getName();
    cout << newString << endl;

    int j = 3;
    if (j == 2)
    {
        return 1;
    }

    Resource *p2 = pResource;                                       // Pointer resource to a pointer Resource
    string s3 = p2->getName();
    cout << "s3: " << s3 << endl;

    // Clean
    delete pResource;

    string s4 = pResource->getName();
    cout << "s4: " << s4 << endl;// SHOULD NOT BE THERE??

    pResource = nullptr;
    delete pResource;            // Should crash system, deletes twice
    delete p2;

    cout << "Done" << endl;
    return 0;
}