#include <iostream>
#include "person.pb.h"

int main() {
    PERSON::Person person01;
    person01.set_name("John Doe");
    person01.set_id(1234);
    person01.set_email("asdf");


std::cout << "Name: " << person01.name() << std::endl;
std::cout << "ID: " << person01.id() << std::endl;
std::cout << "Email: " << person01.email() << std::endl;

std::cout << person01.DebugString() << std::endl;

return 0;
}


/**
 * protoc -I=./ --cpp_out=./ person.proto
 * 
 * g++ -std=c++17 -stdlib=libc++  main.cpp person.pb.cc -L/usr/local/lib -lprotobuf -pthread -o my_program
 * g++ -std=c++11 -I /home/username/local/include -L /home/username/local/lib main.cpp person.pb.cc -lprotobuf -pthread  -o my_program
 */