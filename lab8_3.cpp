#include <iostream>
#include <string>
using namespace std;

string findChar(int age, int height, int bounty)
{
    string character;
    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
            character = "Chopper";
        }
        else if (height < 180)
        {
            character = "Usopp";
        }
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000)
            {
                character = "Zoro";
            }
            else
            {
                character = "Sanji";
            }
        }
    }
    else
    {
        if (age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 500000000)
            {
                character = "Jinbe";
            }
            else
            {
                character = "Franky";
            }
        }
        else
        {
            character = "Brook";
        }
    }

    return character;
}

int main()
{
    int age=0, height=0, bounty=0;
    cout << "Enter your age: ";
    cin >> age;
    string result;
    result = findChar(age, height, bounty);
    cout << "Your character = " << result;
    return 0;
}