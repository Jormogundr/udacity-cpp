#include <string>
#include <iostream>
/*
Define a class Animal.
Define 3 member variables: color, name, age.
Define a derived class Snake that inherits from the base class Animal.
Create a member variable length for the Snake class.
Create a derived class Cat that inherits from the base class Animal.
Create a member variable height for the Cat class.
Create MakeSound() member functions for each of the derived classes.
In the main() function instantiate Snake and Cat objects. Initialize both their unique and derived attributes. Program them to make a sound.

*/

// Define base class Animal

class Animal {
    public:
        void MakeNoise(){std::cout << "Loud noises" << std::endl;}
        std::string color;
        std::string name;
        int age;
};

class Snake : public Animal {
    public:
        void MakeNoise() {std::cout << "Wawaweewa" << std::endl;}
        float length;
};

class Cat: public Animal {
    public:
        void MakeNoise() {std::cout << "ssssssssss bruh" << std::endl;}
        float height;
};

int main() {
    Animal animal;
    animal.color = "purple";
    animal.name = "jaguar";
    animal.age = 69;

    Snake snake;
    snake.color = "blue";
    snake.name = "python";
    snake.age = 420;
    snake.length = 69.420;

    Cat cat;
    cat.color = "yellow";
    cat.name = "lion";
    cat.age = 5;
    cat.height = 9001;

    animal.MakeNoise();
    snake.MakeNoise();
    cat.MakeNoise();
    return 0;
}