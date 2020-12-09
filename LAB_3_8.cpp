/* Question : Implement the base class Shape and derive triangle, rectangle, circle and square 
    classes from it. Implement functions to compute the area and perimeter of the polygon. 
    Use the concept of pure virtual functions. */
// Code
#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    float area, perimeter;

public:
    virtual void Area() = 0;
    virtual void Perimeter() = 0;
};

class Triangle : public Shape
{
protected:
    float side1, side2, side3, s;

public:
    Triangle();
    bool validator();
    void Area();
    void Perimeter();
};

class Rectangle : public Shape
{
protected:
    float side1, side2;

public:
    Rectangle();
    void Area();
    void Perimeter();
};

class Circle : public Shape
{
protected:
    float radius;

public:
    Circle();
    void Area();
    void Perimeter();
};

class Square : public Shape
{
protected:
    float side;

public:
    Square();
    void Area();
    void Perimeter();
};

int main()
{
    Shape *shape;
    int choice;
    cout << "<--------AREA - PERIMETER CALCULATOR-------->\n";
    do
    {
        cout << "\nChoose a shape of which area and perimeter is to be found out ";
        cout << "\n1.CIRCLE\n2.RECTANGLE\n3.SQUARE\n4.TRIANGLE\n5.EXIT";
        cout << "\nEnter your choice : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
        {
            Circle c;
            shape = &c;
            shape->Area();
            shape->Perimeter();
            break;
        }
        case 2:
        {
            Rectangle r;
            shape = &r;
            shape->Area();
            shape->Perimeter();
            break;
        }
        case 3:
        {
            Square s;
            shape = &s;
            shape->Area();
            shape->Perimeter();
            break;
        }
        case 4:
        {
            Triangle t;
            shape = &t;
            shape->Area();
            shape->Perimeter();
            break;
        }
        case 5:
            exit(0);
            break;
        default:
        {
            cout << "\nWrong Choice !";
            break;
        }
        }
    } while (choice != 5);

    return 0;
}

// Member functions of class Circle

Circle ::Circle()
{
    cout << "Enter the radius of the circle : ";
    cin >> radius;
}

void Circle ::Area()
{
    area = M_PI * radius * radius;
    cout << "\nArea\t\t\t: " << area;
}

void Circle ::Perimeter()
{
    perimeter = 2 * M_PI * radius;
    cout << "\nPerimeter\t\t: " << perimeter;
}

// Member functions of class Rectangle

Rectangle ::Rectangle()
{
    cout << "Enter the sides of the rectangle : ";
    cin >> side1 >> side2;
}
void Rectangle ::Area()
{
    area = side1 * side2;
    cout << "\nArea\t\t\t: " << area;
}
void Rectangle ::Perimeter()
{
    perimeter = 2 * (side1 + side2);
    cout << "\nPerimeter\t\t: " << perimeter;
}

// Member functions of class Square
Square ::Square()
{
    cout << "Enter side of the Square : ";
    cin >> side;
}
void Square ::Area()
{
    area = side * side;
    cout << "\nArea\t\t\t: " << area;
}
void Square ::Perimeter()
{
    perimeter = 4 * side;
    cout << "\nPerimeter\t\t: " << perimeter;
}

// Member functions of class Triangle

Triangle ::Triangle()
{
    bool validate = true;
    while (validate)
    {
        cout << "Enter the sides of the triangle : ";
        cin >> side1 >> side2 >> side3;
        validate = validator();
    }
}

bool Triangle ::validator()
{
    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side1 + side3) > side2)
            {
                cout << "Triangle is valid.\n";
                return false;
            }
            else
            {
                cout << "Triangle is not valid ! Check the data again.\n";
                return true;
            }
        }
        else
        {
            cout << "Triangle is not valid ! Check the data again.\n";
            return true;
        }
    }
    else
    {
        cout << "Triangle is not valid ! Check the data again.\n";
        return true;
    }
}
void Triangle ::Area()
{
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    cout << "\nArea\t\t\t: " << area << endl;
}
void Triangle ::Perimeter()
{
    perimeter = side1 + side2 + side3;
    cout << "\nPerimeter\t\t: " << perimeter << endl;
}