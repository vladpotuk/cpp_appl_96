#include "student.h"

Student::Student(const std::string& name, int age, const std::string& studentId)
    : name(name), age(age), studentId(studentId) {}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

std::string Student::getStudentId() const {
    return studentId;
}
