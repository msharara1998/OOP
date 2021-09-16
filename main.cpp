#include <iostream>
#include "class.h"
#include "functions.h"
#include <cmath>
using namespace std;
//The code simulates a particle along with its dynamics and energy calculations
int main()
{
    Particle* p=inputDistribution(3);
cout<<kinetic_energy(3, p)<<"\t"<<potential_energy(3,p);
}