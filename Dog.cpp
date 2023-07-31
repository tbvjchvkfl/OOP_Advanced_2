#include <iostream>
#include "Dog.h"


Dog::Dog() :mbreed{BREED::SHITZU}
{
    std::cout << "\t[+] Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "\t[-] Dog" << std::endl;
}

Dog::BREED Dog::GetBreed() const
{
    return mbreed;
}

void Dog::SetBreed(Dog::BREED breed)
{
    mbreed = breed;
}

void Dog::Hawling()
{
    std::cout << "Awwwwwwww..." << std::endl;
}
