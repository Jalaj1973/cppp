#include <iostream>
#include <map>
using namespace std;

int main()
{
    // create a map to store student names and marks
    map<string, int> students;

    // add students to the map

    students["John"] = 92;
    students["Emily"] = 90;
    students["Michael"] = 88;

    // search for student named Riya
    if (students.count("Riya") == 1)
    {
        cout << "Riya's marks: " << students["Riya"] << endl;
    }
    else
    {
        auto it = students.begin();
        advance(it, 2);
        string third = it->first;
        cout << it->first << " : " << students[third] << endl;
    }
    return 0;
}