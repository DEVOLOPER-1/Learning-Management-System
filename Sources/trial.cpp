#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    string NationalID = "28708271200496";
    string idChar = NationalID.substr(1, 2);
    
    cout << idChar << endl;
    int currYear = 2024;
    int brthYear{0};
    
    if (NationalID[0] == '3')
    {
        if (idChar[0] == '0')
        {brthYear = 2000 + idChar[1] - '0' ;}
        else
        {brthYear = 2000 + atoi(&idChar[0]);}        //couldn't cast two charcters integer from scratch
    }

    else
    {
        if (idChar[0] == '0')
        {brthYear = 1900 + idChar[1] - '0' ;}
        else
        {brthYear = 1900 + atoi(&idChar[0]);}        //couldn't cast two charcters integer from scratch
    }

    cout << brthYear << endl;   
}