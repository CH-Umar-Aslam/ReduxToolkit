#include <iostream>
#include <fstream>
using namespace std;
int dfa = -1;
bool flag = true;
void st1(char a)
{

    if (a == 'u')
        dfa = 1;
    else if (a == 'k')
        dfa = 3;
    else if (a == 'b')
        dfa = 2;
    else
        dfa = -1;
}

void st2(char a)
{

    if (a == 'u')
        dfa = 4;
    else if (a == 'k')
        dfa = 4;
    else if (a == 'b')
        dfa = 2;
    else
        dfa = -1;
}

void st3(char a)
{

    if (a == 'u')
        dfa = 4;
    else if (a == 'k')
        dfa = 4;
    else if (a == 'b')
        dfa = 4;
    else
        dfa = -1;
}

void st4(char a)
{

    if (a == 'u')
        dfa = 4;
    else if (a == 'k')
        dfa = 4;
    else if (a == 'b')
        dfa = 4;
    else
        dfa = -1;
}

int ifAccepted(string str)
{
    flag = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (dfa == -1 || dfa == 1)
        {
            st1(str[i]);
        }

        else if (dfa == 2)
        {
            st2(str[i]);
        }
        else if (dfa == 3)
        {
            st3(str[i]);
        }
        else if (dfa == 4)
        {
            st4(str[i]);
        }
        else
        {
            return 0;
        }
    }

    if (dfa == 1 || dfa == 2 || dfa == 3)
    {
        dfa = -1;
        return 1;
    }
    else
    {
        dfa = -1;
        return 0;
    }
}

int main()
{
    string InputSt;
    ifstream File("myfile.txt");
    if (File.is_open())
    {

        while (getline(File, InputSt))
        {

            if (ifAccepted(InputSt))
            {
                cout << "Accepted\n";
            }
            else
            {
                cout << "Not Accepted\n";
            }
        }
    }
    File.close();
    if (flag == true && dfa == -1)
    {
        cout << "Accepted.";
    }
}
