#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

    string std1;
    string choice;
    int math, science, english;
    int remarks;
    bool isRunning= true;
    


    while (isRunning) {

        cout << "---== Student Subject Grades Card ==---" << endl;
        
        cout << "Enter student name: ";
        cin.ignore(numeric_limits<streamsize>::max());
        getline(cin, std1);

        cout << "Enter grades in Math: ";
        cin >> math;

        cout << "Enter grades in Science: ";
        cin >> science;

        cout << "Enter grades in English: ";
        cin >> english;

        remarks = (math + science + english) / 3;


        cout << "--==STUDENT REMARKS==--" << endl;

        cout << "Student Name: " << std1 << endl;
        cout << "Average Grade: " << remarks << endl;
        cout << "Findings/Status: ";


        if (remarks >= 98) {
            cout << "With highest honors";
        else if (remarks >= 95){
            cout << "With high honors";
        } 
        else if (remarks >= 90) {
            cout << "With honors";
        }
        else if (remarks >= 80) {
            cout << "Satisfactory";
        }
        else if (remarks >= 75) {
            cout << "Passed";
        } else {
            cout << "Failed";
        }

        }
        
        cout << "Wanna try to compute for another student? (yes/no): ";
        cin >> choice;

        if (choice == "no") {
            isRunning = false;
        }


        
        
    }
    


}