/* Question : Polar coordinates are represented in angle and radius format while rectangular coordinates represented as (x,y). 
    Define classes for both types and include member functions to convert from polar to rectangular coordinates.
    (conversion from class to class.) */ 
// Code 
#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
private:
    float angle,radius;
public:
    float return_angle();
    float return_radius();
    void input();
    void output();
};

class Rectangular
{
private:
    float x, y;
public:
    void operator=(Polar p);
    void output();
};

int main() {
    Polar p;
    Rectangular r;
    p.input();
    p.output();
    r = p;
    r.output();
}

float Polar :: return_angle() {
    return angle;
}

float Polar :: return_radius() {
    return radius;
}

void Polar :: input() {
    cout << "\n<------- Input for Polar coordinates --------->\n";
    cout << "\nEnter radius and angle (in degrees)  : ";
    cin >> radius >> angle;
    angle = angle *(3.1415 / 180);        // Converting angle from degrees to radians
}

void Polar :: output() {
    cout << "\n<------- Output for Polar coordinates --------->\n";
    cout << "\nRadius   : " << radius << endl;
    cout << "Angle    : " << angle << " radians";
}

void Rectangular :: operator= (Polar p) {
    x = p.return_radius() * cos(p.return_angle());
    y = p.return_radius() * sin(p.return_angle());
}

void Rectangular :: output() {
    cout << "\n\n<------- Output for Rectangular coordinates --------->\n\n";
    cout << "x                : " << x << endl;
    cout << "y                : " << y << endl;
    cout << "Coordinate form  : " << x << " + " << y << "j";
}