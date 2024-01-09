#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int age, const std::string& studentId);

    
    std::string getName() const;
    int getAge() const;
    std::string getStudentId() const;

private:
    std::string name;
    int age;
    std::string studentId;
};

#endif 