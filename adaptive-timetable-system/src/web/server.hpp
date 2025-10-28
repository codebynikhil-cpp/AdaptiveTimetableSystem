// server.hpp
#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>

class Server {
public:
    Server(int port);
    void start();
    void stop();
    
private:
    int port;
    void handleRequest(const std::string& request);
};

#endif // SERVER_HPP