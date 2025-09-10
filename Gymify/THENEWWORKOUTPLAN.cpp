#include <iostream>
using namespace std;

int main(){


   char yes;
   cout << "Do you want a Diet plan according to your goals if yes(y) or no(n)?" << endl;
   cin >> yes;
   if (yes == 'y' || 'Y')
   {
        cout << "Alright first we are gonna start with calculating your BMR,Whats your height(cm)?" << endl;
        float height;
        cin >> height;
        float weight;
        cout << "Whats your current weight(Kg)?" << endl;
        cin >> weight;
        float age;
        cout << "Whats your age" << endl;
        cin >> age;
        float bmr = (weight*10) + (6.25*height) - (5*age) + 5;
        cout << "This is your BMR " << bmr << " kcal" << endl;
        cout << "Your BMR is: " << bmr << " kcal, Now according to your activity level we'll calculate what's you maintanence calories" << endl;
        cout << "Choose of these options" << endl;
        int options;
        cout << "1) Sedentary (little to no exercise):" << endl;
        cout << "2) Lightly Active (light exercise 1-3 days/week):" << endl;
        cout << "3) Moderately Active (moderate exercise 3-5 days/week):" << endl;
        cout << "4) Very Active (hard exercise 6-7 days/week):" << endl;
        cout << "5) Extra Active (very hard exercise, physical job, or 2x training):" << endl;
        cin >> options;
        
        switch (options)
        {
        case 1:
                cout << "Your maintenance calorie is: " << (bmr*1.2) << " Kcal" << endl;
            break;
        case 2:
                cout << "Your maintenance calorie is: " << (bmr*1.375) << " Kcal" << endl;
            break;

        case 3:
                cout << "Your maintenance calorie is: " << (bmr*1.55) << " Kcal" << endl;
            break;

        case 4:
                cout << "Your maintenance calorie is: " << (bmr*1.725) << " Kcal" << endl;
            break;

        case 5:
                cout << "Your maintenance calorie is: " << (bmr*1.9) << " Kcal" << endl;
            break;
        
        default:

            cout << "Invalid input!" << endl;

            break;
        }



   } else (cout << "ntg for now" << endl);
   





    return 0;

}
