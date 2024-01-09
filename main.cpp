#include <iostream>
#include "aspirant.h"

int main() {
    Aspirant aspirant("John Doe", 25, "A12345", "Machine Learning");

    std::cout << "Name: " << aspirant.getName() << std::endl;
    std::cout << "Age: " << aspirant.getAge() << std::endl;
    std::cout << "Student ID: " << aspirant.getStudentId() << std::endl;
    std::cout << "Research Topic: " << aspirant.getResearchTopic() << std::endl;

    return 0;
}
