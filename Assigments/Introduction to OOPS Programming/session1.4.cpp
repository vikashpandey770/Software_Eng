/*

1.4
*/
#include<iostream>
#include<string>
using namespace std;
class Task{
private:
    string title;
    bool isDone;
public:
    Task(){
        title = "";
        isDone = false;
    }
    Task(string t)
    {
        title=t;
        isDone=false;
    }
    void markDone()
    {
        isDone=true;
    }
    void display(){
        cout <<title<<"["
             << (isDone ?"DONE":"PENDING")
             <<"]"<<endl;
    }
};
class TaskList
{
private:
    Task tasks[10];
    int count;
public:
    TaskList()
    {
        count=0;
    }
    void addTask(string title)
    {
        tasks[count]=Task(title);
        count++;
    }
    void markTaskDone(int index)
    {
        if(index>=0&&index<count)
        {
            tasks[index].markDone();
        }
        else
        {
            cout<<"Invalid task index"<< endl;
        }
    }
    void showTasks()
    {
        cout << "\nTask List:\n";
        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
      }
 }
};

int main()
{
    TaskList list;
    list.addTask("Study C++");
    list.addTask("Complete Assignment");
    list.addTask("Practice Coding");
    list.markTaskDone(1);
    list.showTasks();

    return 0;
}
