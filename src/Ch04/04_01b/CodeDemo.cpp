// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){ 
    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT];
    //compiler will assign float to doubles, implicit conversion
    //auto doesn'r work for arrays, type needs to be defined
    float levelDifficulty[] = {1.0,3.5,6.0,10.5}; 

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    std::cout << "Level 1: "  << enemies[0] << " enemies" << std::endl;
    std::cout << "Level Difficulty: "  << levelDifficulty[0] << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
