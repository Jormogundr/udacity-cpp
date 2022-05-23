#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid {
    public:
    Pyramid(int l, int w, int h) : width_(w), length_(l), height_(h) {}
    int getWidth() {return width_;}
    int getHeight() {return height_;}
    int getLength() {return length_;}
    void setWidth(int w) {
        if (w > 0) {width_ = w;}
    void setHeight(int h) {height_ = h;}
    void setLength(int l) {length_ = l;}
    int Volume() {
        volume_ = length_*width_*(height_/3);
        return volume_;
    }
    
    private:
    int width_;
    int length_;
    int height_;
    int volume_;
};

// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.getLength() == 4);
  assert(pyramid.getWidth() == 5);
  assert(pyramid.getHeight() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}