// teacher.hpp

#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>

class Teacher {
public:
    Teacher(const std::string& name, const std::string& subject);
    
    std::string getName() const;
    std::string getSubject() const;
    void addAvailability(const std::string& timeSlot);
    const std::vector<std::string>& getAvailability() const;

private:
    std::string name;
    std::string subject;
    std::vector<std::string> availability;
};

#endif // TEACHER_H