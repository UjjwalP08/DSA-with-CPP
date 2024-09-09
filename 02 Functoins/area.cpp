#include <iostream>
#include <cmath>
using namespace std;

float getAreaOfCircle(float r)
{
    float area = (22 * pow(r, 2)) / 7;
    return area;
}
int main()
{
    float r;
    cout << " Enter a value of radius: ";
    cin >> r;

    float area = getAreaOfCircle(r);

    cout << "Area of Circle is " << area << endl;

    return 0;
}