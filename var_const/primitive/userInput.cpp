using namespace std;
#include<iostream>
#include<string>

int main()
{
    string userFavTea;
    int userTeaRating;

    cout << "\nWhat would you like to order in tea?";
    getline(cin , userFavTea); // to read the entire line of input including spaces

    cout << "\nHow would you rate your tea out of 10?";
    cin>> userTeaRating;

    cout << "\nYou ordered:"<< userFavTea << endl;
    cout << "\nYou rated your tea as:"<< userTeaRating << endl;

    return 0;
}