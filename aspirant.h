#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student {
public:
    Aspirant(const std::string& name, int age, const std::string& studentId, const std::string& researchTopic);

    
    std::string getResearchTopic() const;

private:
    std::string researchTopic;
};

#endif 

