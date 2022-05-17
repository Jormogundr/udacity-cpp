// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare class Rectangle
class Rectangle {
    friend class Square;
    private:
        int height_;
        int width_;
};


// Define class Square as friend of Rectangle
class Square {
    public:
        class Recatngle;
        Square(int s)  {side_ = 4;}
    private:
        int side_;
};

// Define class Rectangle
class Rectangle {
    public:
        Area() {}
    private:
        int width_;
        int height_;
};
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;

// Define a Rectangle constructor that takes a Square
Rectangle::Rectangle(Square square)

// Define Area() to compute area of Rectangle



// Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}