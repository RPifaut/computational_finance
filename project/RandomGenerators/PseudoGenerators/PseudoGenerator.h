#pragma once
#include "UniformGenerator.h"

class PseudoGenerator: UniformGenerator
{
    protected:

        myLong Seed;
        myLong Current; 
    
    public:

        PseudoGenerator();
        PseudoGenerator(myLong seed);
        ~PseudoGenerator();

};