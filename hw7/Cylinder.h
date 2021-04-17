#include <fstream>
#include <math.h>
using namespace std;
#ifndef CYLINDER_H
#define CYLINDER_H
#define PI 3.1415926

class Cylinder
{
private:
double x,y,z,r,h,facets;
public:
Cylinder(double x,double y,double z,double r,double h,int facets);
void print(string filename);
};
#endif