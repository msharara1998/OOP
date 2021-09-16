//
// Created by Mohammad Sharara on 9/15/2021.
//

#ifndef UNTITLED2_CLASS_H
#define UNTITLED2_CLASS_H
class Particle
{
private:
    double X, Y, Z, Vx, Vy, Vz, m;
public:
    Particle();
    Particle(double, double, double, double, double, double, double);
    double KineticEnergy();
    double distance2Particles(Particle&);
    double getVlocity();
};


#endif //UNTITLED2_CLASS_H
