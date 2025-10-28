#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include <vector>

class Course {
public:
    Course(const std::string& name, int credits);
    
    std::string getName() const;
    int getCredits() const;
    void addPrerequisite(const Course& course);
    const std::vector<Course>& getPrerequisites() const;

private:
    std::string name;
    int credits;
    std::vector<Course> prerequisites;
};

#endif // COURSE_HPP