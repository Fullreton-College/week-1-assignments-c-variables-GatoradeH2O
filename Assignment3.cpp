#include<iostream>
#include<string>
using namespace std;

int main()
{
    string profname, username, food, numba, adj, color, animal;
    
    // Get user input
    cout << "Enter the name of your professor: ";
    cin >> profname;

    cout << "Enter your name: ";
    cin >> username;

    cout << "Enter your favorite food: ";
    cin >> food;

    cout << "Enter a number between 100 and 120: ";
    cin >> numba;
    while (numba < "100" || numba > "120")
    {
        cout << "Please enter a number between 100 and 120: ";
        cin >> numba;
    }
    cout << "Enter an adjective: ";
    cin >> adj;

    cout << "Enter a color: ";
    cin >> color;

    cout << "Enter an animal: ";
    cin >> animal;

    // Output the letter
    cout << "Dear Instructor " << profname << "," << endl;
    cout << "" << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time.";
    cout << " First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill." << endl;
    cout << "I came down with a fever of " << numba << " degrees.";
    cout << " Next, my " << adj << " pet " << animal << " must have smelled the remains of the " << food << endl;
    cout << "on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late." << endl;
    cout << "" << endl;
    cout << "Sincerely," << endl;
    cout << username << endl;

    return 0;

}/* create the code yourself */
