//
// Created by Jason Suits on 3/22/2026.
//
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// 1. Define a struct named Student
struct Student {
    int id;          // student ID (int)
    string name;     // student name (string)
    double score;    // student score (double)
};

int main() {
    // 2. Create 3 student records in the program
    // Values based on the students.txt example in the slides
    Student s1 = {1001, "David", 85.5};
    Student s2 = {1002, "Lisa", 92.0};
    Student s3 = {1003, "John", 78.3};

    // 3. Write the records to a text file named students.txt
    ofstream outFile("students.txt");

    // Data must be written one member at a time or separated by spaces
    outFile << s1.id << " " << s1.name << " " << s1.score << endl;
    outFile << s2.id << " " << s2.name << " " << s2.score << endl;
    outFile << s3.id << " " << s3.name << " " << s3.score << endl;

    outFile.close(); // Close the file

    // 4. Read the records back from the file
    ifstream inFile("students.txt");
    Student temp;

    // 5. Display the records on the console
    cout << "===== Student Records Read From File =====" << endl;

    // Using a while loop to read formatted I/O
    while (inFile >> temp.id >> temp.name >> temp.score) {
        cout << "ID: " << temp.id
             << " | Name: " << temp.name
             << " | Score: " << temp.score << endl;
    }

    inFile.close();
    return 0;
}