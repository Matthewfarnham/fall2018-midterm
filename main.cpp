/**

Description: This program will prompt the user to input a string and a character of their choice and the program will count and return the number of said chosen character.
Filename: main.cpp
Author: Matthew Farnham
Date: Thu Oct 18 18:18:22 PDT 2018

*/
#include<iostream>
#include<string>

using namespace std;

//Function that prompts the user for a string and returns it
string get_string(string prompt)
{
   string s;
   cout << prompt;
   getline(cin,s);

   return s;
}

//Function that returns the amount of characters within the given string
int char_count(string question, char c)
{
    int count = 0;
    for (int i = 0; i < question.length(); i++)
    {
        char subchar = tolower( question[i] );
        if(subchar == c)
        {
            count++;
        }
    }

    return count;
}   

//Main function that displays the prompt and number of characters in the string
int main()
{
    string problem = get_string("Please enter a string: ");
    cout << "Please enter a character: ";
    char c;
    cin >> c;
    int count = char_count(problem,c);
    cout << "There are " << count << " instances of " << c << " in \"" << problem << "\"" << endl;

    return 0;
}

