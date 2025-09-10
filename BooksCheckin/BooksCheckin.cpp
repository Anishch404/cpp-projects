#include <iostream>

#include <limits>
using namespace std;

int main(){


   int roll;
   cout << "please enter your roll no: " <<endl;
   cin >> roll;
    int booksIssued;
   cout << "Enter how many books you want to issue(You can only issue books upto 5 at once)" << endl;
   cin >> booksIssued;
   if (booksIssued > 5 && booksIssued <= 0)
   {
        cout << "Invalid option!" << endl;
   } else {

        cout << "Invalid option!" << endl;
    
   }

    string* booksNames = new string[booksIssued];


    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 

   for (int i=0; i < booksIssued; i++){

    cout << "Please enter the name of book " << i + 1 << endl;
        getline(cin, booksNames[i]);

   }


    for(int i=0; i < booksIssued ; i++ ){

        cout << "Name of the books issued: " << endl;
        cout << booksNames[i] << endl;
    }

   delete[] booksNames;

    return 0;
}
