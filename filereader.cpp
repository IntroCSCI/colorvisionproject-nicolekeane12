#include "filereader.h"

filereader::filereader(string filename)
{
    string line;
    ifstream myfile ("input.in");
    if (myfile.is_open())
    {
        string input;
        vector<string> list;
        while (myfile>>input)
        {
            list.push_back(input);
            if(list.size()==4)
            {
                add_to_palette(list);
                list.clear();
            }
        }
        myfile.close();
    }
}

vector<palette> filereader::retreive_database()
{
    return data;
}

void filereader::add_to_palette(vector<string> list)
{
    string color_name = list[0];
    int red = stoi(list[1]);
    int green = stoi(list[2]);
    int blue = stoi(list[3]);
    palette p(color_name,red,green,blue);
    data.push_back(p);
}