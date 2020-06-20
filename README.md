# libdaylight C++ example

This project shows a minimal example for how libdaylight can be used in C++ projects.

## Code Snippet

```cpp
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
```

## Building

```sh
$ cmake -B build -S .
$ cmake --build build
```

## Running

```sh
$ ./build/myproj
0.882754
```

## How it works

In CMakeLists.txt file you can see that libdaylight is included and linked using CPM

```cmake
include(cmake/CPM.cmake)

CPMAddPackage(
  NAME libdaylight
  GITHUB_REPOSITORY adonmo/daylight
  GIT_TAG 0.1.3
)
```

When you run cmake build, specified version of the library is fetched and linked to the application
