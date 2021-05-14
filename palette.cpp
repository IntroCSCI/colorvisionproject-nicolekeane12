#include "palette.h"

palette::palette(string color_name, int red ,int green, int blue)
{
    this->color_name = color_name;
    this->red = red;
    this->green = green;
    this->blue = blue;
}

double palette::visibility()
{
    //If RED and Green are higher than 70% Visibilty is low
    int total = red + green + blue;
    if(total<100)
        return 0.3;
    else if(total<210)
        return 0.5;
    return 1;
}
string palette::get_color_name()
{
    return color_name;
}
void palette::lacking_gradient()
{
    int max_grad = max(red,max(blue,green));
    int min_grad = min(red,min(green,blue));
    int difference = max_grad - min_grad;
    if(difference>150)
    {
        cout<<"This color is lacking an R,G,B element"<<endl;
    }else
    {
        cout<<"This color has a good balance of RGB"<<endl;
    }
}
void palette::deficiency()
{
    if(red>=50||green>=50)
    {
        cout<<"This color is difficult to see for Red/Green deficiency"<<endl;
    }else
    {
        cout<<"This color is OKAY for Red/Green deficiency"<<endl;
    }
}
bool palette::isDark()
{
    if(red==green==0||red==blue==0||green==blue==0)
        return true;
    return false;
}
