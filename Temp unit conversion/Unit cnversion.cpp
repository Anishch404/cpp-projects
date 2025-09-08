#include <iostream>
using namespace std;

int main(){

    // float Celsius;
    // cout << "Put the temperature in Celsius here: " << endl;
    // cin >> Celsius;
    // float fahrenheit;
    // fahrenheit = Celsius*9.0 /5.0 + 32.0;
    // cout << "This is the temperature in fahrenheit: " << fahrenheit << endl; 


    cout << "******WELCOME TO TEMP CALCULATOR****** \n";
    cout << "F= Fahrenheit\n";
    cout << "C= Celsius\n";
    cout << "What would you like to convert to: \n";
    float Celsius;
    float Fahrenhiet;
    char unit;
    cin >> unit;
    if ( unit== 'C' || unit == 'c'){
        cout << "Please enter the temperature: ";
        cin >> Celsius;
    }
    else if( unit == 'F' || unit == 'f'){
        cout << "Please enter the temperture: ";
        cin >> Fahrenhiet;
    }
    
    float unitout;
    if ( unit == 'C' || unit == 'c')
    {
        unitout = (Fahrenhiet - 32.0) * 5.0 / 9.0;
        cout << "Temperature in Celsius is : " << unitout << endl;
        
    }
    else if ( unit == 'F' || unit == 'f'){
        unitout = (Celsius * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit is : " << unitout << endl;
    }
    
    cout << "******THANKYOU FOR USING THIS TEMPERATURE CALCULATOR******" << endl;

    return 0;
}