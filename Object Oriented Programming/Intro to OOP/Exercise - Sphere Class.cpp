#include <cassert>
#include <cmath>
#include <stdexcept>

/*
Declare:

A constructor function that takes the radius as an argument
A member function that returns the volume
Directions
Define a class called Sphere.
Add one private member variable: radius.
Define a constructor to initialize the radius.
Define an accessor method that returns the radius.
Define a member function to return the volume of the sphere.
Write a main() function to initialize an object of type Sphere.
*/

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
  Sphere(int r) : radius_(r) {}

  // Accessors
  float Radius() {return radius_;}
  float Volume() {
      volume_ = (4.0/3.0)*M_PI*std::pow(radius_, 3);
      return volume_;
  }

 private:
  // Private members
  float radius_;
  float volume_;
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
}