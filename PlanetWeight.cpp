
#include <iostream>
// This code is made by AresGamez
using namespace std;
// Global Variables
int weight;
int moon;
int venus;
int mercury;
string planet;
int main()
{
    cout << "Welcome to the Planet Weight Calculator\n";
    cout << "Please pick a planet(Moon, Venus)\n";
    cin >> planet;

    if (planet == "Moon" || planet == "moon")
    {
        cout << "Please enter a weight(lbs)\n";
        cin >> weight;
        moon = weight * 0.165;
        cout << "Your weight on the Moon would be: " << moon << " lbs";
    }
    if (planet == "Venus" || planet == "venus")
    {
        cout << "Please enter a weight(lbs)\n";
        cin >> weight;
        venus = weight * 0.9042;
        cout << "Your weight on Venus would be: " << venus << " lbs";
    }
    if (planet == "Mercury" || planet == "mercury")
    {
        cout << "Please enter a weight(lbs)\n";
        cin >> weight;
        mercury = weight * 0.3772;
        cout << "Your weight on Mercury would be " << mercury << " lbs";
    }
}

