#ifndef _P_
#define _P_
#include <iostream>
using namespace std;
class palette{
    private:
        int red;
        int green;
        int blue;
        string color_name;
    public:
        //Constructor to create a palette element
        palette(string color_name, int red, int green, int blue);

        //Visibility Index to see if color is problematic
        void deficiency();

        //Check if color is lacking RGB
        void lacking_gradient();

        //1 = Very Visibile , <0.5 is less visible
        double visibility();

        //If color is dark or not
        bool isDark();

        //Return color name
        string get_color_name();
};
#endif