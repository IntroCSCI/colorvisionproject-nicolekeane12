#include <iostream>
#include <vector>
#include <fstream>
#include "palette.h"
#include <math.h>
using namespace std;
class filereader{
    private: 
        string filename;
        vector<palette> data;
        void add_to_palette(vector<string> list);
    public:
        //Get filename and store the information in color palette
        filereader(string filename);
        //Get the color palette database
        vector<palette> retreive_database();
};