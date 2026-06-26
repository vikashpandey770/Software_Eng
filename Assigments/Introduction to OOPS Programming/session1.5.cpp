/*
5. Compare your procedural C version and OOP TaskList version: List 3 problems you 
faced in the C version that were solved by using classes and methods in the OOP version.
*/

/*
Problem in C Version
1. Data and functions are separate. Task data is stored in arrays, and functions operate
 on them separately. This can make the code harder to manage.
2. Difficult to manage multiple task properties. If you add more fields 
(priority, deadline, category), you need additional
 arrays and careful index management
3. 3. Higher chance of errors. Functions can accidentally modify arrays incorrectly, and task
 status management becomes complicated.

* * Solution in OOP Version
1.Encapsulation: The Task class keeps data (title, isDone) and methods (markDone(), display()) together in one place.

2.Objects store related data together. Each Task object contains all information about a task, making
 the code cleaner and easier to extend.
 
3.Methods control behavior. Functions like markDone() and showTasks() operate directly on the object's data, reducing 
 mistakes and improving code reliability.
*/

#include<iostream>
#include<string>
using namespace std;

class Task
{
private:
    string title;
    bool isDone;

public:
    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title << " ["
             << (isDone ? "DONE" : "PENDING")
             << "]" << endl;
    }
};

int main()
{
    cout << "Problems in Procedural C Version:" << endl;
    cout << "1. Data and functions are separate." << endl;
    cout << "2. Managing multiple arrays is difficult." << endl;
    cout << "3. Higher chance of data handling errors." << endl;

    cout << "\nSolutions in OOP Version:" << endl;
    cout << "1. Class keeps data and methods together." << endl;
    cout << "2. Object stores all task information in one place." << endl;
    cout << "3. Methods control task operations safely." << endl;

    cout << "\nExample Task:" << endl;

    Task t("Complete Assignment");
    t.display();

    t.markDone();
    t.display();

    return 0;
}
