#include <cassert>
#include <cmath>
#include <stdexcept>

/*
Directions
In this exercise, you'll update the class Sphere so that it becomes possible to change the radius of a sphere after it has been initialized. In order to do this, you'll move the two class invariants into private member functions.

Move the range-check on radius_ into a private member function.
Move the volume_ calculation, which depends on the value of radius_ into the same private member function.
Verify that the class still functions correctly.
Add a mutator method to change the radius of an existing Sphere.
Verify that the mutator method successfully updates both the radius and the volume.
*/

class Sphere {
 public:
  Sphere(int radius) : radius_(radius), volume_(M_PI * 4 / 3 * pow(radius_, 3)) {
    Radius(radius);
  }

  int Radius() const { return radius_; }
  int Volume() const { return volume_; }

  // TODO: mutators
    bool Radius(int r) {
      if (r <= 0) throw std::invalid_argument("radius must be positive");
      radius_ = r;
      volume_ = (4.0/3.0)*M_PI*std::pow(r, 3);
    }

 private:
  int radius_;
  float volume_;


};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);

  sphere.Radius(3);
  assert(sphere.Radius() == 3);
  assert(abs(sphere.Volume() - 113.1) < 1);

  bool caught{false};
  try {
    sphere.Radius(-1);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}