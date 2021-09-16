#include "class.h"
#include <cmath>

using namespace std;
Particle::Particle(double x, double y, double z, double vx, double vy, double vz, double M) {
    X=x;
    Y=y;
    Z=z;
    Vx=vx;
    Vy=vy;
    Vz=vz;
    m=M;
}

Particle::Particle() {
    X=0;
    Y=0;
    Z=0;
    Vx=0;
    Vy=0;
    Vz=0;
    m=0;
}

double Particle::KineticEnergy() {
    return 0.5*m*pow(getVlocity(),2);
}

double Particle::distance2Particles(Particle& p) {
    return sqrt(pow(X-p.X,2)+pow(Y-p.Y,2)+pow(Z-p.Z,2));
}

double Particle::getVlocity() {
    return sqrt(pow(Vx,2)+pow(Vy,2)+pow(Vz,2));
}

