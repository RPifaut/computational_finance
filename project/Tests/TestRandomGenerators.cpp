#include <iostream>

#include "../RandomGenerators/RandomGenerator.h"
#include "../RandomGenerators/PseudoGenerators/UniformGenerator.h"
#include "../RandomGenerators/PseudoGenerators/PseudoGenerator.h"
#include "../RandomGenerators/PseudoGenerators/LinearCongruential.h"


int main()
{

    // Variables
    myLong seed = 42;
    myLong multiplier = 40014;
    myLong increment = 1;
    myLong modulus = 2147483563;

    // Create the Generator
    UniformGenerator* BaseGenerator = new LinearCongruential();

    

    // Generate values and print out the results
    std::cout << "--- Starting Testing Linear Congruential Generator ---" << std::endl;
    for (int i = 0; i < 20; ++i)
    {
        std::cout << i << "-th draw: " << BaseGenerator->Generate() << std::endl;
    }
    std::cout << "Linear Congruential Generator test finished." << std::endl;
 
}