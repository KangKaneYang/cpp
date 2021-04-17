#include <fstream>
using namespace std;
#ifndef CUBE_H
#define CUBE_H

class Cube
{
private:
double x,y,z,r;
public:
Cube(double x,double y,double z,double r);
void print(string filename);
};
#endif