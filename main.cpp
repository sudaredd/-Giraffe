#include <iostream>
#include <string>
#include <algorithm>
#include <thread>

//using namespace std;

void hello()
{
    std::cout << "Hello \n";
}

void f (int i, std::string const& s) {

    std::cout << "i:" << i << " , string is::" << s << std::endl;
}

int main()
{
    std::thread t1{hello};

    t1.join();

    std::thread t2(f, 5, "hello string");

    t2.join();

    std::cout << "Number of threads allows " << std::thread::hardware_concurrency() << std::endl;
    return 0;
}



