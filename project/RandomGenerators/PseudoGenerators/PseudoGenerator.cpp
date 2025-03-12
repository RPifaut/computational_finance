#include "PseudoGenerator.h"

// Default constructor
PseudoGenerator::PseudoGenerator()
{
    Seed = 42;
    Current = 42;

}


// Constructor with input parameter
PseudoGenerator::PseudoGenerator(myLong seed): Seed(seed), Current(seed)
{

}


// Destructor
PseudoGenerator::~PseudoGenerator()
{

}