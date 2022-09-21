#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Student {
public:
    vector<string> firstName;
    vector<string> lastName;
    vector<string> grade;
};


 
int main()
{
    Student s;
    vector <string> students;
    ifstream myfile("example.txt");

    string currentLine;

    if (myfile.is_open()) 
    {

        while (getline(myfile, currentLine))
        {
            if (currentLine.size() > 0)
            {
                students.push_back(currentLine);
            }
        }

        stringstream check1(students);

        string intermediate;

        for (string i : s.firstName) {
            cout << i << endl;
        }
        
    }

    else
    {
        cout << "unable to open file\n";
    }
    
    return(0);
}
