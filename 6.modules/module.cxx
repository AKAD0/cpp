// module.cxx
module;

#include <iostream>

export module mod;

export void func() {
    std::cout << "hello, world!\n" <<std::endl;
}