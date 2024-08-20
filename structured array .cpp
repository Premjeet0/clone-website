#include <iostream>
using namespace std;
struct Student {
    string name;
    int rollNumber;
    float marks;
};
int main() {

    Student students[3];
    for(int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
        cout << endl;
    }

    cout << "Student Details:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber << ", Marks: " << students[i].marks << endl;
    }

    return 0;
}
