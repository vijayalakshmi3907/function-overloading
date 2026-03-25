#include <iostream>
using namespace std;

// Volume of cube
bdouble volume(double s) {
    return s * s * s;
}

// Volume of cuboid
double volume(double length, double breadth, double height) {
    return length * breadth * height;
}

// Volume of cylinder
double volume(double radius, double height) {
    return 3.14159 * radius * radius * height;
}

int main() {
	double s,l,b,h1,h2,r;
	cout<<"enter the side of cube :";
	cin>>s;
    cout << "Volume of cube of side " <<s<<" is "<< volume(s) << endl;
    
    cout << "Volume of cuboid (2x3x4): " << volume(2.0, 3.0, 4.0) << endl;
    cout << "Volume of cylinder (r=2, h=5): " << volume(2.0, 5.0) << endl;
    return 0;
}

