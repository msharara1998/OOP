//
// Created by Mohammad Sharara on 9/16/2021.
//
#include "class.h"
#include <iostream>
#include <cmath>
using namespace std;
Particle* inputDistribution(int n) {
    Particle* p=new Particle[n];
    double x, y, z, vx, vy, vz, m;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z>>vx>>vy>>vz>>m;
        Particle tmp(x,y,z,vx,vy,vz,m);
        *(p+i)=tmp;
    }
    return p;
}
double kinetic_energy(int n, Particle* pts){
    double total_k=0;
    for(int i=0;i<n;i++)
        total_k+=(pts+i)->KineticEnergy();
    return total_k;
}

double potential_energy(int n, Particle* pts){
    double total_p;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++) {
            double r = (pts+i)->distance2Particles(pts[j]);
            total_p += (1/pow(r,12))-(2/pow(r,6));
        }
    }
    return total_p;
}