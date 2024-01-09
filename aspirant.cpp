#include "aspirant.h"

Aspirant::Aspirant(const std::string& name, int age, const std::string& studentId, const std::string& researchTopic)
    : Student(name, age, studentId), researchTopic(researchTopic) {}

std::string Aspirant::getResearchTopic() const {
    return researchTopic;
}
