#include <iostream>
#include <type_traits>
using namespace std;

class Shape{
    public:
        virtual void area()=0;};

class square: public Shape{
    protected: 
        int side;
    public:
        void area(){
            cout << "Sides of square: ";
            cin >> side;
            cout << "Area of square: " << side * side << endl;}};

class rectangle: public Shape{
    protected: 
        int length;
        int width;
    public:
        void area(){
            cout << "lenght and width of rectangle: ";
            cin >> length >> width;
            cout << "Area of rectangle: " << length * width << endl;}};


class circle: public Shape{
    protected: 
        int radius;
    public:
        void area(){
            cout << "radius of circle: ";
            cin >> radius;
            cout << "Area of circle: " << 3.14 * radius * radius << endl;}};

class triangle: public Shape{
    protected: 
        int base;
        int height;
    public:
        void area(){
            cout << "base and height of triangle: ";
            cin >> base >>  height;
            cout << "Area of triangle: " << 0.5  * base * height  << endl;}};

int main(){
    Shape* ptr;

    cout << "For square: " << endl;
    square sq;
    ptr = &sq;
    ptr->area();


    cout << "For reactangle: " << endl;
    rectangle react;
    ptr = &react;
    ptr->area();
        
    cout << "For circle: " << endl;
    circle cic;
    ptr = &cic;
    ptr->area();

    cout << "For trangle: " << endl;
    triangle tri;
    ptr = &tri;
    ptr->area();

    return 0;}
