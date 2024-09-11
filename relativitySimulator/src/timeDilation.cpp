#include <cmath>
#include "timeDilation.hpp"

namespace timedilation
{
// We are using natural units here so c == G == 1
// This also makes 0 <= v <= 1
double speedDilation(double velocity){
    return std::sqrt(1 - velocity * velocity);
}

// Assuming that one mass is much larger than the other (m << M)
double gravitationDilation(double mass, double radius){
    return std::sqrt(1 - 2 * mass / radius);
}

double properTime(double mass, double velocity, double radius){
    const double largeRadius = 1e6;
    const double slowSpeed = 0.8;

    if (velocity < slowSpeed && radius > largeRadius){
        return 1;
    }

    if (velocity < slowSpeed) {
        return gravitationDilation(mass, radius);
    }

    if (radius > largeRadius) {
        return speedDilation(velocity);
    }
    return std::sqrt(1 - 2 * mass / radius - velocity * velocity);
}
}
