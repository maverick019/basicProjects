#include <iostream>

using namespace std;

class Triangle
{
private:
    // container to store triangle data
    double base, height, area;

public:
    //default constructor
    Triangle();
    // parameterized constructor here
    Triangle(double base, double height);
    // copy constructor with a Triangle object as parameter
    Triangle(const Triangle& obj);

    //! method to calculate area of triangle
    double calculateArea() {
      cout << "area of triangle : " << base * height * 0.5F << endl;
      return base * height * 0.5F;
    }

    // friend function to duplicate dimensions of triangle
    friend Triangle duplicateDimension(const Triangle& other);
};

// definition of default constructor
Triangle::Triangle()
{
    base = 0.0;
    height = 0.0;
}

// definition of parameterized constructor
Triangle::Triangle(double base, double height)
{
    this->base = base;
    this->height = height;
}

// definition of copy constructor
Triangle::Triangle(const Triangle& obj)
{
    this->base = obj.base;
    this->height = obj.height;
}

//friend function to duplicate the dimensions of triangle
Triangle duplicateDimension(const Triangle& other)
{
    return Triangle(other.base, other.height);
}

// Start
int main()
{
    Triangle t1(10.0, 6.0);
    t1.calculateArea();
    Triangle t2 = duplicateDimension(t1);
    t2.calculateArea();
    // Triangle t3(t1);
    // t3.calculateArea();    
    return 0;
}