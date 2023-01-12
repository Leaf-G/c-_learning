#include <iostream>
#include <thread>

void doit(){
    std::cout << "World!" << std::endl;
}

int main(){
    std::thread a([]{ std::cout << "Hello, " << std::flush; }),b(doit);
    a.join();
    b.join();
    return 0;
}