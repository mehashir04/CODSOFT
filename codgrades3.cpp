#include <iostream>
#include <string>

using namespace std;

const int maxStudents = 100; // Maximum number of students

int main() {
    string studentNames[maxStudents];
    double grades[maxStudents];

    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter grade for " << studentNames[i] << ": ";
        cin >> grades[i];
    }

    // Calculate average grade
    double totalGrade = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalGrade += grades[i];
    }
    double averageGrade = (numStudents > 0) ? totalGrade / numStudents : 0;

    // Find highest and lowest grades
    double lowestGrade = grades[0];
    double highestGrade = grades[0];

    for (int i = 1; i < numStudents; ++i) {
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
    }

    // Display results
    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
