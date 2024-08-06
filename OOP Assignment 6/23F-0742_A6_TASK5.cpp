//#include <iostream>
//#include <map>
//#include <string>
//#include <fstream>
//#include <stdexcept>
//using namespace std;
//
//template <typename T>
//class Student {
//public:
//    string name;
//    T id;
//    map<string, double> courses; // course name and grade
//    double gpa;
//
//    Student(string name, T id) : name(name), id(id), gpa(0.0) {}
//};
//
//template <typename T>
//class Course {
//public:
//    string title;
//    map<T, Student<T>*> students; // student id and pointer to student object
//
//    Course(std::string title) : title(title) {}
//};
//
//class GradeManagementSystem {
//public:
//    map<int, Student<int>*> students;
//    map<string, Course<int>*> courses;
//
//    void addStudent(string name, int id) {
//        students[id] = new Student<int>(name, id);
//    }
//
//    void enrollStudent(int id, string courseName) {
//        if (courses.find(courseName) == courses.end()) {
//            courses[courseName] = new Course<int>(courseName);
//        }
//        courses[courseName]->students[id] = students[id];
//    }
//
//    void addGrade(int id, string courseName, double grade) {
//        students[id]->courses[courseName] = grade;
//    }
//
//    void viewStudentRecord(int id) {
//        cout << "Student Name: " << students[id]->name << endl;
//        cout << "Student ID: " << students[id]->id << endl;
//        cout << "Courses: " << endl;
//        for (auto& course : students[id]->courses) {
//            cout << course.first << ": " << course.second << endl;
//        }
//    }
//
//    void calculateGPA(int id) {
//        double total = 0.0;
//        for (auto& course : students[id]->courses) {
//            total += course.second;
//        }
//        students[id]->gpa = total / students[id]->courses.size();
//    }
//
//    void saveToFile(string filename) {
//        ofstream file(filename);
//        if (!file) {
//            throw runtime_error("FileAccessException: Unable to open file");
//        }
//        for (auto& student : students) {
//            file << "Student Name: " << student.second->name << endl;
//            file << "Student ID: " << student.second->id << endl;
//            file << "Courses: " << endl;
//            for (auto& course : student.second->courses) {
//                file << course.first << ": " << course.second << endl;
//            }
//            file << "GPA: " << student.second->gpa << std::endl;
//            file << "------------------------" << std::endl;
//        }
//        file.close();
//    }
//};
//
//int main() {
//    GradeManagementSystem system;
//    int choice;
//    while (true) {
//        cout << "1. Add Student\n";
//        cout << "2. Enroll Student\n";
//        cout << "3. Add Grade\n";
//        cout << "4. View Student Record\n";
//        cout << "5. Calculate GPA\n";
//        cout << "6. Save to File\n";
//        cout << "7. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice == 1) {
//            string name;
//            int id;
//            cout << "Enter student name: ";
//            cin >> name;
//            cout << "Enter student id: ";
//            cin >> id;
//            system.addStudent(name, id);
//        }
//        else if (choice == 2) {
//            int id;
//            string courseName;
//            cout << "Enter student id: ";
//            cin >> id;
//            cout << "Enter course name: ";
//            cin >> courseName;
//            system.enrollStudent(id, courseName);
//        }
//        else if (choice == 3) {
//            int id;
//            string courseName;
//            double grade;
//            cout << "Enter student id: ";
//            cin >> id;
//            cout << "Enter course name: ";
//            cin >> courseName;
//            cout << "Enter grade: ";
//            cin >> grade;
//            system.addGrade(id, courseName, grade);
//        }
//        else if (choice == 4) {
//            int id;
//            cout << "Enter student id: ";
//            cin >> id;
//            system.viewStudentRecord(id);
//        }
//        else if (choice == 5) {
//            int id;
//            cout << "Enter student id: ";
//            cin >> id;
//            system.calculateGPA(id);
//        }
//        else if (choice == 6) {
//            string filename;
//            cout << "Enter filename: ";
//            cin >> filename;
//            system.saveToFile(filename);
//        }
//        else if (choice == 7) {
//            break;
//        }
//        else {
//            cout << "Invalid choice. Please try again.\n";
//        }
//    }
//    return 0;
//}