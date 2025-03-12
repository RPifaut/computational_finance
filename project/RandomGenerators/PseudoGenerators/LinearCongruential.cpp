#include "LinearCongruential.h"


// Default constructor
LinearCongruential::LinearCongruential(): PseudoGenerator(42)
{

    Multiplier = 40014;
    Increment = 0;
    Modulus = 2147483563;

}


// Default constructor with inputs
LinearCongruential::LinearCongruential( myLong seed, 
                                        myLong multiplier, 
                                        myLong increment, 
                                        myLong modulus
                                    ): 
                                    PseudoGenerator(seed),
                                    Multiplier(multiplier),
                                    Increment(increment),
                                    Modulus(modulus)
{

}


// Method to generate a PseudoRandom number from the LinearCongruential generator
double LinearCongruential::Generate()
{
    // Update the current value used to generate the PS number
    Current = (Multiplier * Current + Increment) % Modulus;

    // Return the scaled/uniformed PR value, converted to double
    return (double) Current / Modulus;

}


// Destructor
LinearCongruential::~LinearCongruential()
{

}