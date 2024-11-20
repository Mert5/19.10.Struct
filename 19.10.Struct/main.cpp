#include <iostream>

// References => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

class Dog{
    public :    // if you write 'public', you won't take the compiler error below
        std::string m_name; // 'm_' means member variable
};

struct Cat{
    public :
        std::string m_name;
};

struct Point{   // mostly useful if you only have public members and do not want to use functions/methods
    double x;
    double y;
};

void print_point(const Point& point){
    std::cout << "Coordinates = [" << point.x << "," << point.y << "]" << std::endl;
}

int main(){

    Dog dog1;
    Cat cat1;

    dog1.m_name = "Fluffy"; //if you do that, you'll take compiler error because class variables are private by default
    std::cout << "Dog's name is : " << dog1.m_name << std::endl;
    cat1.m_name = "Garfield";   // and members of structs' are public by default
    std::cout << "Cat's name is : " << cat1.m_name << std::endl;

    Point point1;
    point1.x = 10;
    point1.y = 5.7;

    print_point(point1);

    point1.x = 45.3;
    point1.y = 62.9;

    print_point(point1);

    return 0;
}