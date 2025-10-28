// config.hpp
#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

struct Config {
    std::string databasePath;
    int maxCourses;
    int maxTeachers;
    int maxRooms;
    int maxStudents;
};

Config loadConfig(const std::string& filepath);

#endif // CONFIG_HPP