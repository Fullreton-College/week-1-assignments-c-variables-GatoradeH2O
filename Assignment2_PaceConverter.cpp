#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mph = 6.5;

    // PACE calculation (minutes per mile)

    double pace = 60 / mph;

    // express pace in minutes and seconds

    int minutes = static_cast<int>(pace);  
    double seconds = (pace - minutes) * 60;


    // express output with 1 decimal point

    cout << fixed << setprecision(1);
    cout << "Speed: " << mph << " mph" << endl;
    cout << "Pace: " << minutes << " minutes and " << seconds << " seconds per mile" << endl;

    return 0;
}
