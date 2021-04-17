#include "Cylinder.h"

Cylinder::Cylinder(double x,double y, double z,double r,double h, int facets):x(x),y(y),z(z),r(r),h(h),facets(facets){}
void Cylinder::print(string filename){
    ofstream s(filename.c_str());
    if(facets<3)
    s<<"ERROR";
    s<<"solid OpenSCAD_Model"<<endl;
    for(int i=0;i<facets;i++){
        s<<" facet normal -0 0 1"<<endl;
        s<<"  outer loop"<<endl;
        s<<"   vertex "<<x<<" "<<y<<" "<<z+h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * i / facets)<<" "<<y+r * sin(2 * PI * i / facets)<<" "<<z+h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * (i+1) / facets)<<" "<<y+r * sin(2 * PI * (i+1) / facets)<<" "<<z+h/2<<endl;
        s<<"  endloop"<<endl;
        s<<" endfaect"<<endl;
        s<<" facet normal -0 0 -1"<<endl;
        s<<"  outer loop"<<endl;
        s<<"   vertex "<<x<<" "<<y<<" "<<z-h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * i / facets)<<" "<<y+r * sin(2 * PI * i / facets)<<" "<<z-h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * (i+1) / facets)<<" "<<y+r * sin(2 * PI * (i+1) / facets)<<" "<<z-h/2<<endl;
        s<<"  endloop"<<endl;
        s<<" endfaect"<<endl;
        s<<" facet normal "<<(r * cos(2 * PI * i / facets)+r * cos(2 * PI * (i+1) / facets))/2<<" "<<(r * sin(2 * PI * i / facets)+r * sin(2 * PI * (i+1) / facets))/2<<" 0"<<endl;
        s<<"  outer loop"<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * i / facets)<<" "<<y+r * sin(2 * PI * i / facets)<<" "<<z+h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * (i+1) / facets)<<" "<<y+r * sin(2 * PI * (i+1) / facets)<<" "<<z-h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * i / facets)<<" "<<y+r * sin(2 * PI * i / facets)<<" "<<z-h/2<<endl;        
        s<<"  endloop"<<endl;
        s<<" endfaect"<<endl; 
        s<<" facet normal "<<(r * cos(2 * PI * i / facets)+r * cos(2 * PI * (i+1) / facets))/2<<" "<<(r * sin(2 * PI * i / facets)+r * sin(2 * PI * (i+1) / facets))/2<<" 0"<<endl;
        s<<"  outer loop"<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * i / facets)<<" "<<y+r * sin(2 * PI * i / facets)<<" "<<z+h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * (i+1) / facets)<<" "<<y+r * sin(2 * PI * (i+1) / facets)<<" "<<z-h/2<<endl;
        s<<"   vertex "<<x+r * cos(2 * PI * (i+1) / facets)<<" "<<y+r * sin(2 * PI * (i+1) / facets)<<" "<<z+h/2<<endl;        
        s<<"  endloop"<<endl;
        s<<" endfaect"<<endl;                       
    }
    s<<"endsolid OpenSCAD_Model"; 
}