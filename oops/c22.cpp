#include <iostream>
#include <map>
using namespace std;

int main() {
    // create a map to store student names and marks
    map<string, int> students;

    // add students to the map
    students["Riya"] = 85;
    students["John"] = 92;
    students["Emily"] = 90;
    students["Michael"] = 88;

    // search for student named Riya
    if (students.count("Riya") == 1) {
        cout << "Riya's marks: " << students["Riya"] << endl;
    } else {
        // get the third student's name
        auto it = students.begin();
        advance(it, 2); // move the iterator to the third element
        string third_student = it->first;

        cout << third_student << "'s marks: " << students[third_student] << endl;
    }
    return 0;
}
