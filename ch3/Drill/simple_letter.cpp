#include <iostream>
#include <string>
using std::cin;
using std::cout;

void letter(const std::string& name, const std::string& fname, char fsx, const int age)
{
    cout << "Dear " << name << ",\n"
             <<"How are you? I'm fine, I miss you.\n"
             << "Have you seen " << fname << " lately?\n";
    if (fsx == 'm'){
       cout << "if you see " << fname << " please ask him to call me.\n";
    } 
    else if (fsx == 'f'){
        cout << "if you see " << fname << " please ask her to call me.\n";
    }


    if(age < 112 && age > 0){
    cout << "I hear you just turned " << age << '\n';

        if(age < 12){
          cout << "Next year you will be " << age + 1;
        }
        else if(age == 17){
          cout << "Next year you will be " << age + 1;
        }
        else if((age < 80 && age > 70))
        {
          cout << "I hope you're enjoying your retirement.";
        }
    }   
    else {
        cout << "error"; // throw
    }
    cout << "\nYours sincerely  Andres.\n"; // throw
}
int main()
{
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    std::string firstName;
    cin >> firstName;
    cout << "Enter a friend name:\n";
    std::string friendName;
    cin >> friendName;
    char friendSex = '0';
    cout << "Enter " << friendName << " sex ('m' for male, 'f' for female):\n";
    cin >> friendSex;
    cout << "Enter your friend's age:\n";
    int age = 0;
    cin >> age;
    letter(firstName, friendName, friendSex, age);
       
    return 0;
}
