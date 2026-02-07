#include "PPPheaders.h"

int main() 
// read temperatures into a vector
{
    vector<double> temps;
    for (double temp;cin>>temp;)    // read from cin to temp
        temps.push_back(temp);

    // compute the mean temperature
    double sum = 0;
    for (double x: temps)
        sum += x;
    cout << "Average Temperature: " << sum/temps.size() << "\n";


    // compute the median temperature
    // note this could go out of range
    ranges::sort(temps);
    cout << "Median temperature: " << temps[temps.size()/2] << "\n";
}