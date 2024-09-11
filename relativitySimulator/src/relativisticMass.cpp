#include <cmath>
#include "relativisticMass.hpp"

// relativistic mass is not often used for calculations in physics.
// generally we consider rest mass and then apply relativistic effects to the momentum and energy instead
namespace relativisticMass
{
    double massIncrease(double mass, double velocity){
        return mass / std::sqrt(1 - velocity * velocity);
    }
}
