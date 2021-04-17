#include "Cube.h"
#include "Cylinder.h"
int main() {
	//translate([0,10,0]) cube(25);
	Cube c(0,10,0, 25); // make a 25x25x25 cube at location (0,10,0)
	c.print("cube.stl");

	//translate([100,0,0]) cylinder(r=20,h=50, $fn=30);
	
	// center of base circle x=100, y=0, z=0 r=20 h=50, number of facets = 30
	Cylinder cyl(100, 0, 0, 20, 50, 30);
	c.print("cyl.stl");
}