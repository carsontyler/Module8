#include <iostream>
using namespace std;
const int MAX = 3;

class Stack
{
private:
    int st[MAX];
    int top;
public:
    class Range {};                                      // Exception class for stack. EMPTY
    Stack() {top = -1;}                                  // Constructor

    void push(int var)
    {
        if(top >= MAX - 1)                               // If stack is full
            throw Range();                               // Throw exception
        st[++top] = var;                                 // Put number on stack
    }
    int pop()
    {
        if(top < 0)
            throw Range();                               // Throw exception
        return st[top--];
    }
};

int main()
{
    Stack s1;
    try
    {
        s1.push(11);
        s1.push(12);
        s1.push(13);
        s1.push(14);                                     // Stack is full
        cout << "1: " << s1.pop() << endl;
        cout << "2: " << s1.pop() << endl;
        cout << "3: " << s1.pop() << endl;
        cout << "4: " << s1.pop() << endl;
    }
    catch(Stack::Range)                                  // Exception Handler
    {
        cout << "Exception: Stack full or Empty." << endl;
    }
    cout << "I am done" << endl;

    return 0;
}

/*                                                      Sequences of Events
 * Code is executing normally outside try blocks
 * Control enters the try block
 * A Statement in the try block causes an error in a member function
 * The member function throws an error
 * Control is transferred to the exception handler (catch block, which follows try block)
 */