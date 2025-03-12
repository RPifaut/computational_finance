#pragma once
#include "PseudoGenerator.h"

class LinearCongruential: PseudoGenerator
{

    protected:

        myLong Multiplier;
        myLong Increment;
        myLong Modulus;

    public:

        // Constructors
        LinearCongruential();
        LinearCongruential(myLong seed, myLong multiplier, myLong increment, myLong modulus);

        // Methods
        double Generate();

        // Desctructor
        ~LinearCongruential();

};