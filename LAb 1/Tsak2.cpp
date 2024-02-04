#include <iostream>
#include <string>
#include <iomanip>  // For std::setw

// Define the Course class
class Course {
public:
    std::string course_code;
    std::string course_name;
};

// Define the Grade class
class Grade {
public:
    int mark;
    char the_grade;

    // Function to calculate the grade based on the mark
    void calculate_grade() {
        if (mark > 69) the_grade = 'A';
        else if (mark > 59) the_grade = 'B';
        else if (mark > 49) the_grade = 'C';
        else if (mark > 39) the_grade = 'D';
        else the_grade = 'E';
    }
};

// Define the Student class
class Student {
public:
    std::string registration_number;
    std::string name;
    int age;
    Course course;
    Grade grade;

    // Function to add a mark and calculate the grade
    void add_mark(int mark) {
        grade.mark = mark;
        grade.calculate_grade();
    }
};

// Array to store the students
Student students[40];
int student_count = 0;

// Function to add a student
void add_student(const Student& student) {
    if (student_count < 40) {
        students[student_count] = student;
        student_count++;
    }
}

// Function to list all students with their marks
void list_students() {
    if (student_count == 0) {
        std::cout << "No students yet.\n";
        return;
    }

    std::cout << std::left << std::setw(20) << "Name" << std::setw(20) << "Registration Number" << std::setw(10) << "Mark" << std::setw(10) << "Grade" << "\n";
    for (int i = 0; i < student_count; ++i) {
        std::cout << std::left << std::setw(20) << students[i].name << std::setw(20) << students[i].registration_number << std::setw(10) << students[i].grade.mark << std::setw(10) << students[i].grade.the_grade << "\n";
    }
}

int main() {
    while (true) {
        std::cout << "Enter 1 to add a student, 2 to add marks, 3 to list all students with their marks, or 4 to quit: ";
        int choice;
        std::cin >> choice;
        std::cin.ignore();  // Ignore the newline character left in the input buffer

        if (choice == 1) {
            // Add a student
            Student s;
            std::cout << "Enter registration number: ";
            std::getline(std::cin, s.registration_number);
            std::cout << "Enter name: ";
            std::getline(std::cin, s.name);
            std::cout << "Enter age: ";
            std::cin >> s.age;
            std::cin.ignore();  // Ignore the newline character left in the input buffer
            std::cout << "Enter course code: ";
            std::getline(std::cin, s.course.course_code);
            std::cout << "Enter course name: ";
            std::getline(std::cin, s.course.course_name);
            add_student(s);
        } else if (choice == 2) {
            // Add marks
            if (student_count == 0) {
                std::cout << "No students yet.\n";
                continue;
            }

            for (int i = 0; i < student_count; ++i) {
                std::cout << i + 1 << ". " << students[i].name << " (" << students[i].registration_number << ")\n";
            }

            std::cout << "Enter the number of the student: ";
            int student_number;
            std::cin >> student_number;
            student_number--;  // Adjust for 0-based indexing

            std::cout << "Enter mark: ";
            int mark;
            std::cin >> mark;

            students[student_number].add_mark(mark);
        } else if (choice == 3) {
            // List all students with their marks
            list_students();
        } else if (choice == 4) {
            std::cout << "Program stopped!\n";
            break;
        }
    }

    return 0;
}
