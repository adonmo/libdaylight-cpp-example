#include <iostream>
#include <daylight/Sunclock.hpp>

using namespace std;


int main() {
    // Coordinates and Timezone offsets for Hyderabad
    Sunclock sun(17.3859, 78.4867, 5.5);

    // Unix timestamp for 2020-5-21 14:10:35
    auto irradiance = sun.irradiance(1590050435);

    // Since we gave afternoon - we should expect a value close to 1
    cout << irradiance << endl; // Returns 0.882754

    return 0;
}
