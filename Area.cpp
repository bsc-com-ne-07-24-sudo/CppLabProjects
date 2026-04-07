#include <iostream>
using namespace std;

// 🔹 Namespace
namespace shapes {

    // 🔸 Square Class
    class Square {
    private:
        float side;

    public:
        // Default constructor
        Square() {
            side = 0;
        }

        // Overloaded constructor
        Square(float s) {
            side = s;
        }

        // Destructor
        ~Square() {}

        // Setter
        void setSide(float s) {
            side = s;
        }

        // Getter
        float getSide() const {
            return side;
        }
    };


    // 🔸 Triangle Class
    class Triangle {
    private:
        float base;
        float height;

    public:
        // Default constructor
        Triangle() {
            base = 0;
            height = 0;
        }

        // Overloaded constructor
        Triangle(float b, float h) {
            base = b;
            height = h;
        }

        // Destructor
        ~Triangle() {}

        // Setters
        void setBase(float b) {
            base = b;
        }

        void setHeight(float h) {
            height = h;
        }

        // Getters
        float getBase() const {
            return base;
        }

        float getHeight() const {
            return height;
        }
    };


    // 🔸 Circle Class
    class Circle {
    private:
        float radius;

    public:
        // Default constructor
        Circle() {
            radius = 0;
        }

        // Overloaded constructor
        Circle(float r) {
            radius = r;
        }

        // Destructor
        ~Circle() {}

        // Setter
        void setRadius(float r) {
            radius = r;
        }

        // Getter
        float getRadius() const {
            return radius;
        }
    };

} // end namespace shapes


// 🔹 Area Class
class Area {
public:

    // Square area
    static float calculateSquareArea(shapes::Square s) {
        return s.getSide() * s.getSide();
    }

    // Triangle area
    static float calculateTriangleArea(shapes::Triangle t) {
        return 0.5 * t.getBase() * t.getHeight();
    }

    // Circle area
    static float calculateCircleArea(shapes::Circle c) {
        return 3.1416 * c.getRadius() * c.getRadius();
    }
};


// 🔹 Main Function
int main() {

    // 🔸 Square
    float side;
    cout << "Enter side of square: ";
    cin >> side;

    shapes::Square sq(side);
    cout << "Square Area: " << Area::calculateSquareArea(sq) << endl;


    // 🔸 Triangle
    float base, height;
    cout << "\nEnter base of triangle: ";
    cin >> base;

    cout << "Enter height of triangle: ";
    cin >> height;

    shapes::Triangle tri(base, height);
    cout << "Triangle Area: " << Area::calculateTriangleArea(tri) << endl;


    // 🔸 Circle
    float radius;
    cout << "\nEnter radius of circle: ";
    cin >> radius;

    shapes::Circle cir(radius);
    cout << "Circle Area: " << Area::calculateCircleArea(cir) << endl;

    return 0;
}