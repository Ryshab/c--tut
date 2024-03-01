#include <iostream>
// #include <map>
#include <unordered_map>
#include <string>
using namespace std;
/*
Map will give store the value alphabetically and it will give the capital letter the precedence
Unordered_map will just store the values in the start so if you print from start you will get the 
value you put in last
*/
int main()
{
    // map<string, int> student;
    unordered_map<string, int> student;
    student["Mohandas"] = 75;
    student["Kohli"] = 32;
    student["Rishabh"] = 99;
    student["rahul"] = 44;

    unordered_map<string, int>::iterator iter;
    // map<string, int>::iterator iter;
    iter = student.begin();
    for (int i = 0; i < 4; i++)
    {
        cout << iter->first << " ---> " << iter->second << endl;
        iter++;
    }
    return 0;
}