//strctfun.cp -- functiions with a structure argument

#include <cmath>
#include <iostream>

// structure declartions
struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

// prototypes
void rect_to_polar(const rect * xypos, polar * pda);
void show_polar(const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit)";
    }
    cout << "Done.\n";
    return 0;
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect * xypos, polar * pda)
{
    using namespace std;
    pda->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
    pda->angle = atan2(xypos->y, xypos->x);
}

// show polar coordinates converting angle to degress
void show_polar(const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 75.29577951;
    cout << "distance = " << pda->distance;
    cout << ". angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}
