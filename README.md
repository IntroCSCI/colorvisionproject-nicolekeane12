# Color Transparecny

## Description

 I wanted my program to open a file and examine the transparecny number, and decide if that color may or may not be problematic to color blind people. I wanted it to read the file, after the third comma, and analyze that number and ouput if the color might or might not be a problem.
### v0.3 Updates
I created a file of colors with the percent of RBG that each color has. Then it reads the file and decides whether the color is difficult for people with red green deficiences, and looks at the color and decides if it is dark, and if it has a good blalnce of RGB values. I changed this to make the code easily readable and organized. This file is using the basic 16 colors.


### v0.2 Updates
I added a vector that holds the double value and reads it, before I was trying to move spaces and find the double, but now I am use the stod function to turn the file string into a double because it was a decimal.



### v1.0 Updates

I made it so my code will actually run. It looks at the last number of the rgba number and decides if that number is problematic based on transparecny.


## Developer

Nicole Keane

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
This color is likely to be problematic based on transperancy
This color is likely to be problematic based on transperancy
This color is unlikely to be problematic based on transperancy
This color is unlikely to be problematic based on transperancy
```

## C++ Guide

### Variables and Data Types

I used double to represent the decimal that will hold the transparecny number. The string filename will help the user open the file "colors" I used the string input to count and find the commas in the file. I also use a string for the input.
### Updates
I used a string to hold the color name, and if the percent is green, blue or red.

### Console Input and Output

I will input the file name "colors" it is supposed to examine the last number and then output the phrase This color is unlikely/ likely to be probelmatic based on transparency.

### Decisions

I used an If statment, and another if statment, one to see if the file was open and another one to count to the right amount of places within the file.
### Updates
I used if and else statment to check if the color is hard to people with a red green deficieny, if the the color is dark, and if it has a good balance of red green and blue.

### Iteration

I use an if and an else if, and a while statement. This first makes sure that there are four values in each part of the file and checks if that is true and then reads the file and reads the last number and checks if it is porblematic based on the transperancy.

### File Input and Output
I am inserting the values put in the vector to make sure we are in the correct place in the file becasue we only want to read the last number. Then I check that and make sure it is true and it will read any errors and say it is false. If it is true it goes on to read the correct part of the file and outputs the correct statement based on the if statment.


I use a vector to store the double and then read a string from the file and turn it into a double using stod.
### Updates
I can insert a color in the list and it will output if the color is dark, if it is more red or green, and if it is a good balance of RGB. I input a string and get a double, and a bool output.

*Coming in version 0.2*

### Functions

I am using two void functions to help decide if there is an error with the file and to print out the messages which is the print_msg1 and print_msg2.

### Classes
1. Created a file reader class to read information from the input file. Stores the data in a vector of palette.
2. Created a palette class to store RGB values and color name. Create logic to provide details about the color based on RGB values.

*Coming in version 1.0*
