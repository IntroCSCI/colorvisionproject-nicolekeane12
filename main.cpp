//Author: Nicole Keane
#include <iostream>
#include "filereader.h"
#include "palette.h"
#include <string>
using namespace std;


void display_colors(vector<palette> vs);
void display_information(string user_color,vector<palette> vs);


int main()
{
    filereader f("input.in");
    vector<palette> vs = f.retreive_database();
    display_colors(vs);
    string user_color;
    do
    {
        cout<<"Enter a color from database(q to quit): "<<endl;
        cin>>user_color;
        if(user_color!=string(1,'q'))
        display_information(user_color,vs);
    }while(user_color!=string(1,'q'));

}


void display_colors(vector<palette> vs)
{
    for(int i=0;i<vs.size();i++)
    {
        cout<<i+1<<"."<<vs[i].get_color_name()<<endl;
    }
}

void display_information(string user_color,vector<palette> vs)
{
    cout<<"*** Information about "<<user_color<<" ***"<<endl;
    for(int i=0;i<vs.size();i++)
    {
        if(vs[i].get_color_name()==user_color)
        {
            cout<<"Deficieny Status:";
            vs[i].deficiency();

            vs[i].lacking_gradient();

            cout<<"Visibility Index: "<<to_string(vs[i].visibility())<<endl;

            if(vs[i].isDark()==true)
            {
                cout<<"This color is dark"<<endl;
            }else{
                cout<<"This color is not dark"<<endl;
            }
            cout<<"\n\n";
        }
    }
}
