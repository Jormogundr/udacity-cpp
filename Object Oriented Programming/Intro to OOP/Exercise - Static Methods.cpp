#include <cassert>
#include <cmath>
#include <stdexcept>

/*
Refactor class Sphere to move the volume calculation into a static function.
Verify that the class still functions as intended.
Make that static function public.
Call that static function directly from main() to calculate the hypothetical volume of a sphere you have not yet instantiated.
*/

class Sphere {
 public:
  Sphere(int radius) : radius_(radius), volume_(pi_ * 4 / 3 * pow(radius_, 3)) {
    if (radius <= 0) throw std::invalid_argument("radius must be positive");
  }

  static float Volume(int radius);

 private:
  static float constexpr pi_{3.14159};
  int radius_;
  float volume_;
};

float Sphere::Volume(int r) {
    if (r <= 0) throw std::invalid_argument("radius must be positive");
    return pi_ * 4 / 3 * pow(r, 3);

}

// Test
int main(void) {
  assert(abs(Sphere::Volume(5) - 523.6) < 1);
}