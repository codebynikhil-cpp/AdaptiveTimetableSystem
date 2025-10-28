// room.hpp

#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>

class Room {
public:
    Room(const std::string& name, int capacity);
    
    std::string getName() const;
    int getCapacity() const;

private:
    std::string name;
    int capacity;
};

#endif // ROOM_HPP