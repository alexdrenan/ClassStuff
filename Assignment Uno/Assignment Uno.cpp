// Assignment Uno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string normalString = "hello world";
char cakeArray[20] = "the cake is a lie";
char none[20];
int c, d = 0;
int zero;


void ReverseString(string normalString)
{

    reverse(normalString.begin(), normalString.end());

    cout << endl << normalString << endl;
}

int NoVowels(char ch)
{
        if (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
}

int notPrimes(int zero)
{
    for(zero = 0; zero <= 1000; zero++)
    {
        bool prime = true;

        for(int j = 2; j < zero; j++)
        {
            if (zero % j == 0 || zero == j)
            {
                prime = false;
                break;
            }
        }
        if (prime == false)
        {
            cout << zero << ' ';
        }
    }   
    return zero;
}

int main()
{

    for(c = 0; cakeArray[c] != '\0'; c++)
    {
        if (NoVowels(cakeArray[c]) == 0) 
        {
            none[d] = cakeArray[c];
            d++;
        }
    }
    none[d] = '\0';
    strcpy_s(cakeArray, none);

    notPrimes(zero);
    ReverseString(normalString);
    cout << cakeArray;

    return 0;
}


