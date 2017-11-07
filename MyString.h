//
// Created by 17cty on 11/7/2017.
//

#ifndef MODULE10_MYSTRING_H
#define MODULE10_MYSTRING_H


class MyString
{
private:
    char *str;                                              // Pointer to a string
public:
    MyString(char *s);                                      // Constructor with one argument
    ~MyString();                                            // Destructor (MUST HAVE WHEN ALLOCATING SPACE

    void display();                                         // Display string
    void updateString(char *newStr);

};


#endif //MODULE10_MYSTRING_H
